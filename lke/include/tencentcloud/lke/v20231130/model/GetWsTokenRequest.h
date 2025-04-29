/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenReq_Label.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetWsToken请求参数结构体
                */
                class GetWsTokenRequest : public AbstractModel
                {
                public:
                    GetWsTokenRequest();
                    ~GetWsTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接入类型， 5-API 访客
                     * @return Type 接入类型， 5-API 访客
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置接入类型， 5-API 访客
                     * @param _type 接入类型， 5-API 访客
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取  应用AppKey </br>   获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * @return BotAppKey   应用AppKey </br>   获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * 
                     */
                    std::string GetBotAppKey() const;

                    /**
                     * 设置  应用AppKey </br>   获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * @param _botAppKey   应用AppKey </br>   获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * 
                     */
                    void SetBotAppKey(const std::string& _botAppKey);

                    /**
                     * 判断参数 BotAppKey 是否已赋值
                     * @return BotAppKey 是否已赋值
                     * 
                     */
                    bool BotAppKeyHasBeenSet() const;

                    /**
                     * 获取访客ID（外部输入，建议唯一，标识当前接入会话的用户）
长度限制： string(64)
                     * @return VisitorBizId 访客ID（外部输入，建议唯一，标识当前接入会话的用户）
长度限制： string(64)
                     * 
                     */
                    std::string GetVisitorBizId() const;

                    /**
                     * 设置访客ID（外部输入，建议唯一，标识当前接入会话的用户）
长度限制： string(64)
                     * @param _visitorBizId 访客ID（外部输入，建议唯一，标识当前接入会话的用户）
长度限制： string(64)
                     * 
                     */
                    void SetVisitorBizId(const std::string& _visitorBizId);

                    /**
                     * 判断参数 VisitorBizId 是否已赋值
                     * @return VisitorBizId 是否已赋值
                     * 
                     */
                    bool VisitorBizIdHasBeenSet() const;

                    /**
                     * 获取知识标签，用于知识库中知识的检索过滤。该字段即将下线，请使用对话端接口中的 custom_variables 字段替代该字段。
                     * @return VisitorLabels 知识标签，用于知识库中知识的检索过滤。该字段即将下线，请使用对话端接口中的 custom_variables 字段替代该字段。
                     * 
                     */
                    std::vector<GetWsTokenReq_Label> GetVisitorLabels() const;

                    /**
                     * 设置知识标签，用于知识库中知识的检索过滤。该字段即将下线，请使用对话端接口中的 custom_variables 字段替代该字段。
                     * @param _visitorLabels 知识标签，用于知识库中知识的检索过滤。该字段即将下线，请使用对话端接口中的 custom_variables 字段替代该字段。
                     * 
                     */
                    void SetVisitorLabels(const std::vector<GetWsTokenReq_Label>& _visitorLabels);

                    /**
                     * 判断参数 VisitorLabels 是否已赋值
                     * @return VisitorLabels 是否已赋值
                     * 
                     */
                    bool VisitorLabelsHasBeenSet() const;

                private:

                    /**
                     * 接入类型， 5-API 访客
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     *   应用AppKey </br>   获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     */
                    std::string m_botAppKey;
                    bool m_botAppKeyHasBeenSet;

                    /**
                     * 访客ID（外部输入，建议唯一，标识当前接入会话的用户）
长度限制： string(64)
                     */
                    std::string m_visitorBizId;
                    bool m_visitorBizIdHasBeenSet;

                    /**
                     * 知识标签，用于知识库中知识的检索过滤。该字段即将下线，请使用对话端接口中的 custom_variables 字段替代该字段。
                     */
                    std::vector<GetWsTokenReq_Label> m_visitorLabels;
                    bool m_visitorLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENREQUEST_H_
