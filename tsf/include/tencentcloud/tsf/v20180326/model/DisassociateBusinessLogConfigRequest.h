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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DISASSOCIATEBUSINESSLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DISASSOCIATEBUSINESSLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DisassociateBusinessLogConfig请求参数结构体
                */
                class DisassociateBusinessLogConfigRequest : public AbstractModel
                {
                public:
                    DisassociateBusinessLogConfigRequest();
                    ~DisassociateBusinessLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务日志配置项ID列表
                     * @return ConfigIdList 业务日志配置项ID列表
                     */
                    std::vector<std::string> GetConfigIdList() const;

                    /**
                     * 设置业务日志配置项ID列表
                     * @param ConfigIdList 业务日志配置项ID列表
                     */
                    void SetConfigIdList(const std::vector<std::string>& _configIdList);

                    /**
                     * 判断参数 ConfigIdList 是否已赋值
                     * @return ConfigIdList 是否已赋值
                     */
                    bool ConfigIdListHasBeenSet() const;

                    /**
                     * 获取TSF分组ID
                     * @return GroupId TSF分组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置TSF分组ID
                     * @param GroupId TSF分组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 业务日志配置项ID列表
                     */
                    std::vector<std::string> m_configIdList;
                    bool m_configIdListHasBeenSet;

                    /**
                     * TSF分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DISASSOCIATEBUSINESSLOGCONFIGREQUEST_H_
