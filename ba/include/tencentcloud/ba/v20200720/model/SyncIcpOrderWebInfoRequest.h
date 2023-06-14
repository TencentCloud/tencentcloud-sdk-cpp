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

#ifndef TENCENTCLOUD_BA_V20200720_MODEL_SYNCICPORDERWEBINFOREQUEST_H_
#define TENCENTCLOUD_BA_V20200720_MODEL_SYNCICPORDERWEBINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ba
    {
        namespace V20200720
        {
            namespace Model
            {
                /**
                * SyncIcpOrderWebInfo请求参数结构体
                */
                class SyncIcpOrderWebInfoRequest : public AbstractModel
                {
                public:
                    SyncIcpOrderWebInfoRequest();
                    ~SyncIcpOrderWebInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备案ICP订单号
                     * @return IcpOrderId 备案ICP订单号
                     * 
                     */
                    std::string GetIcpOrderId() const;

                    /**
                     * 设置备案ICP订单号
                     * @param _icpOrderId 备案ICP订单号
                     * 
                     */
                    void SetIcpOrderId(const std::string& _icpOrderId);

                    /**
                     * 判断参数 IcpOrderId 是否已赋值
                     * @return IcpOrderId 是否已赋值
                     * 
                     */
                    bool IcpOrderIdHasBeenSet() const;

                    /**
                     * 获取订单里的webId
                     * @return SourceWebId 订单里的webId
                     * 
                     */
                    std::string GetSourceWebId() const;

                    /**
                     * 设置订单里的webId
                     * @param _sourceWebId 订单里的webId
                     * 
                     */
                    void SetSourceWebId(const std::string& _sourceWebId);

                    /**
                     * 判断参数 SourceWebId 是否已赋值
                     * @return SourceWebId 是否已赋值
                     * 
                     */
                    bool SourceWebIdHasBeenSet() const;

                    /**
                     * 获取订单里的webId 数组(如果传入的webIds含有 订单中不包含的webId，会自动跳过)
                     * @return TargetWebIds 订单里的webId 数组(如果传入的webIds含有 订单中不包含的webId，会自动跳过)
                     * 
                     */
                    std::vector<std::string> GetTargetWebIds() const;

                    /**
                     * 设置订单里的webId 数组(如果传入的webIds含有 订单中不包含的webId，会自动跳过)
                     * @param _targetWebIds 订单里的webId 数组(如果传入的webIds含有 订单中不包含的webId，会自动跳过)
                     * 
                     */
                    void SetTargetWebIds(const std::vector<std::string>& _targetWebIds);

                    /**
                     * 判断参数 TargetWebIds 是否已赋值
                     * @return TargetWebIds 是否已赋值
                     * 
                     */
                    bool TargetWebIdsHasBeenSet() const;

                    /**
                     * 获取网站信息字段名 数组
                     * @return SyncFields 网站信息字段名 数组
                     * 
                     */
                    std::vector<std::string> GetSyncFields() const;

                    /**
                     * 设置网站信息字段名 数组
                     * @param _syncFields 网站信息字段名 数组
                     * 
                     */
                    void SetSyncFields(const std::vector<std::string>& _syncFields);

                    /**
                     * 判断参数 SyncFields 是否已赋值
                     * @return SyncFields 是否已赋值
                     * 
                     */
                    bool SyncFieldsHasBeenSet() const;

                    /**
                     * 获取是否先判断同步的网站负责人是否一致 (这里会判断 sitePersonName, sitePersonCerType,sitePersonCerNum三个字段完全一致)  默认:true. 非必要 不建议关闭修改该参数默认值
                     * @return CheckSamePerson 是否先判断同步的网站负责人是否一致 (这里会判断 sitePersonName, sitePersonCerType,sitePersonCerNum三个字段完全一致)  默认:true. 非必要 不建议关闭修改该参数默认值
                     * 
                     */
                    bool GetCheckSamePerson() const;

                    /**
                     * 设置是否先判断同步的网站负责人是否一致 (这里会判断 sitePersonName, sitePersonCerType,sitePersonCerNum三个字段完全一致)  默认:true. 非必要 不建议关闭修改该参数默认值
                     * @param _checkSamePerson 是否先判断同步的网站负责人是否一致 (这里会判断 sitePersonName, sitePersonCerType,sitePersonCerNum三个字段完全一致)  默认:true. 非必要 不建议关闭修改该参数默认值
                     * 
                     */
                    void SetCheckSamePerson(const bool& _checkSamePerson);

                    /**
                     * 判断参数 CheckSamePerson 是否已赋值
                     * @return CheckSamePerson 是否已赋值
                     * 
                     */
                    bool CheckSamePersonHasBeenSet() const;

                private:

                    /**
                     * 备案ICP订单号
                     */
                    std::string m_icpOrderId;
                    bool m_icpOrderIdHasBeenSet;

                    /**
                     * 订单里的webId
                     */
                    std::string m_sourceWebId;
                    bool m_sourceWebIdHasBeenSet;

                    /**
                     * 订单里的webId 数组(如果传入的webIds含有 订单中不包含的webId，会自动跳过)
                     */
                    std::vector<std::string> m_targetWebIds;
                    bool m_targetWebIdsHasBeenSet;

                    /**
                     * 网站信息字段名 数组
                     */
                    std::vector<std::string> m_syncFields;
                    bool m_syncFieldsHasBeenSet;

                    /**
                     * 是否先判断同步的网站负责人是否一致 (这里会判断 sitePersonName, sitePersonCerType,sitePersonCerNum三个字段完全一致)  默认:true. 非必要 不建议关闭修改该参数默认值
                     */
                    bool m_checkSamePerson;
                    bool m_checkSamePersonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BA_V20200720_MODEL_SYNCICPORDERWEBINFOREQUEST_H_
