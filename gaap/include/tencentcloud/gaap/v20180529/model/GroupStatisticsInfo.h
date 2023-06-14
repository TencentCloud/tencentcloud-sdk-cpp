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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_GROUPSTATISTICSINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_GROUPSTATISTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ProxySimpleInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 可以显示统计数据的通道组和对应通道信息
                */
                class GroupStatisticsInfo : public AbstractModel
                {
                public:
                    GroupStatisticsInfo();
                    ~GroupStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道组ID
                     * @return GroupId 通道组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID
                     * @param _groupId 通道组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取通道组名称
                     * @return GroupName 通道组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置通道组名称
                     * @param _groupName 通道组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取通道组下通道列表
                     * @return ProxySet 通道组下通道列表
                     * 
                     */
                    std::vector<ProxySimpleInfo> GetProxySet() const;

                    /**
                     * 设置通道组下通道列表
                     * @param _proxySet 通道组下通道列表
                     * 
                     */
                    void SetProxySet(const std::vector<ProxySimpleInfo>& _proxySet);

                    /**
                     * 判断参数 ProxySet 是否已赋值
                     * @return ProxySet 是否已赋值
                     * 
                     */
                    bool ProxySetHasBeenSet() const;

                private:

                    /**
                     * 通道组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通道组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 通道组下通道列表
                     */
                    std::vector<ProxySimpleInfo> m_proxySet;
                    bool m_proxySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_GROUPSTATISTICSINFO_H_
