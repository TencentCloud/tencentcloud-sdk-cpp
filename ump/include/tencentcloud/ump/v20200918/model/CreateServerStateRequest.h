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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATESERVERSTATEREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATESERVERSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/ServerStateItem.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * CreateServerState请求参数结构体
                */
                class CreateServerStateRequest : public AbstractModel
                {
                public:
                    CreateServerStateRequest();
                    ~CreateServerStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取服务器监控信息列表
                     * @return ServerStateItems 服务器监控信息列表
                     * 
                     */
                    std::vector<ServerStateItem> GetServerStateItems() const;

                    /**
                     * 设置服务器监控信息列表
                     * @param _serverStateItems 服务器监控信息列表
                     * 
                     */
                    void SetServerStateItems(const std::vector<ServerStateItem>& _serverStateItems);

                    /**
                     * 判断参数 ServerStateItems 是否已赋值
                     * @return ServerStateItems 是否已赋值
                     * 
                     */
                    bool ServerStateItemsHasBeenSet() const;

                    /**
                     * 获取商场ID
                     * @return MallId 商场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置商场ID
                     * @param _mallId 商场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取服务器监控信息上报时间戳，单位毫秒
                     * @return ReportTime 服务器监控信息上报时间戳，单位毫秒
                     * 
                     */
                    uint64_t GetReportTime() const;

                    /**
                     * 设置服务器监控信息上报时间戳，单位毫秒
                     * @param _reportTime 服务器监控信息上报时间戳，单位毫秒
                     * 
                     */
                    void SetReportTime(const uint64_t& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 服务器监控信息列表
                     */
                    std::vector<ServerStateItem> m_serverStateItems;
                    bool m_serverStateItemsHasBeenSet;

                    /**
                     * 商场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 服务器监控信息上报时间戳，单位毫秒
                     */
                    uint64_t m_reportTime;
                    bool m_reportTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATESERVERSTATEREQUEST_H_
