/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECONFIGDELIVERREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECONFIGDELIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateAggregateConfigDeliver请求参数结构体
                */
                class UpdateAggregateConfigDeliverRequest : public AbstractModel
                {
                public:
                    UpdateAggregateConfigDeliverRequest();
                    ~UpdateAggregateConfigDeliverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0 关闭  1 开启
                     * @return Status 0 关闭  1 开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0 关闭  1 开启
                     * @param _status 0 关闭  1 开启
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取投递服务名称
                     * @return DeliverName 投递服务名称
                     * 
                     */
                    std::string GetDeliverName() const;

                    /**
                     * 设置投递服务名称
                     * @param _deliverName 投递服务名称
                     * 
                     */
                    void SetDeliverName(const std::string& _deliverName);

                    /**
                     * 判断参数 DeliverName 是否已赋值
                     * @return DeliverName 是否已赋值
                     * 
                     */
                    bool DeliverNameHasBeenSet() const;

                    /**
                     * 获取资源六段式  
COS：qcs::cos:$region:$account:prefix/$appid/$BucketName
CLS:
qcs::cls:$region:$account:cls/topicId
                     * @return TargetArn 资源六段式  
COS：qcs::cos:$region:$account:prefix/$appid/$BucketName
CLS:
qcs::cls:$region:$account:cls/topicId
                     * 
                     */
                    std::string GetTargetArn() const;

                    /**
                     * 设置资源六段式  
COS：qcs::cos:$region:$account:prefix/$appid/$BucketName
CLS:
qcs::cls:$region:$account:cls/topicId
                     * @param _targetArn 资源六段式  
COS：qcs::cos:$region:$account:prefix/$appid/$BucketName
CLS:
qcs::cls:$region:$account:cls/topicId
                     * 
                     */
                    void SetTargetArn(const std::string& _targetArn);

                    /**
                     * 判断参数 TargetArn 是否已赋值
                     * @return TargetArn 是否已赋值
                     * 
                     */
                    bool TargetArnHasBeenSet() const;

                    /**
                     * 获取资源前缀
                     * @return DeliverPrefix 资源前缀
                     * 
                     */
                    std::string GetDeliverPrefix() const;

                    /**
                     * 设置资源前缀
                     * @param _deliverPrefix 资源前缀
                     * 
                     */
                    void SetDeliverPrefix(const std::string& _deliverPrefix);

                    /**
                     * 判断参数 DeliverPrefix 是否已赋值
                     * @return DeliverPrefix 是否已赋值
                     * 
                     */
                    bool DeliverPrefixHasBeenSet() const;

                    /**
                     * 获取投递类型  COS CLS
                     * @return DeliverType 投递类型  COS CLS
                     * 
                     */
                    std::string GetDeliverType() const;

                    /**
                     * 设置投递类型  COS CLS
                     * @param _deliverType 投递类型  COS CLS
                     * 
                     */
                    void SetDeliverType(const std::string& _deliverType);

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取支持跨账号投递的成员账号uin，只能是委派管理员。默认为0，即投递到管理员账号下
                     * @return DeliverUin 支持跨账号投递的成员账号uin，只能是委派管理员。默认为0，即投递到管理员账号下
                     * 
                     */
                    int64_t GetDeliverUin() const;

                    /**
                     * 设置支持跨账号投递的成员账号uin，只能是委派管理员。默认为0，即投递到管理员账号下
                     * @param _deliverUin 支持跨账号投递的成员账号uin，只能是委派管理员。默认为0，即投递到管理员账号下
                     * 
                     */
                    void SetDeliverUin(const int64_t& _deliverUin);

                    /**
                     * 判断参数 DeliverUin 是否已赋值
                     * @return DeliverUin 是否已赋值
                     * 
                     */
                    bool DeliverUinHasBeenSet() const;

                    /**
                     * 获取1：配置变更 2： 资源列表 3：全选
                     * @return DeliverContentType 1：配置变更 2： 资源列表 3：全选
                     * 
                     */
                    uint64_t GetDeliverContentType() const;

                    /**
                     * 设置1：配置变更 2： 资源列表 3：全选
                     * @param _deliverContentType 1：配置变更 2： 资源列表 3：全选
                     * 
                     */
                    void SetDeliverContentType(const uint64_t& _deliverContentType);

                    /**
                     * 判断参数 DeliverContentType 是否已赋值
                     * @return DeliverContentType 是否已赋值
                     * 
                     */
                    bool DeliverContentTypeHasBeenSet() const;

                private:

                    /**
                     * 0 关闭  1 开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 投递服务名称
                     */
                    std::string m_deliverName;
                    bool m_deliverNameHasBeenSet;

                    /**
                     * 资源六段式  
COS：qcs::cos:$region:$account:prefix/$appid/$BucketName
CLS:
qcs::cls:$region:$account:cls/topicId
                     */
                    std::string m_targetArn;
                    bool m_targetArnHasBeenSet;

                    /**
                     * 资源前缀
                     */
                    std::string m_deliverPrefix;
                    bool m_deliverPrefixHasBeenSet;

                    /**
                     * 投递类型  COS CLS
                     */
                    std::string m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * 支持跨账号投递的成员账号uin，只能是委派管理员。默认为0，即投递到管理员账号下
                     */
                    int64_t m_deliverUin;
                    bool m_deliverUinHasBeenSet;

                    /**
                     * 1：配置变更 2： 资源列表 3：全选
                     */
                    uint64_t m_deliverContentType;
                    bool m_deliverContentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEAGGREGATECONFIGDELIVERREQUEST_H_
