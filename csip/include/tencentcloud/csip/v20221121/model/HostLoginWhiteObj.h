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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTLOGINWHITEOBJ_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTLOGINWHITEOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Place.h>
#include <tencentcloud/csip/v20221121/model/HostInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 新增登录审计白名单实体
                */
                class HostLoginWhiteObj : public AbstractModel
                {
                public:
                    HostLoginWhiteObj();
                    ~HostLoginWhiteObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加白地域</p>
                     * @return Places <p>加白地域</p>
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置<p>加白地域</p>
                     * @param _places <p>加白地域</p>
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取<p>加白源IP，支持网段，多个IP以逗号隔开</p>
                     * @return SrcIp <p>加白源IP，支持网段，多个IP以逗号隔开</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>加白源IP，支持网段，多个IP以逗号隔开</p>
                     * @param _srcIp <p>加白源IP，支持网段，多个IP以逗号隔开</p>
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取<p>加白用户名，多个用户名以逗号隔开</p>
                     * @return UserName <p>加白用户名，多个用户名以逗号隔开</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>加白用户名，多个用户名以逗号隔开</p>
                     * @param _userName <p>加白用户名，多个用户名以逗号隔开</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>是否对全局生效, 1：全局有效 0: 仅针对单台主机&#39;</p>
                     * @return IsGlobal <p>是否对全局生效, 1：全局有效 0: 仅针对单台主机&#39;</p>
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置<p>是否对全局生效, 1：全局有效 0: 仅针对单台主机&#39;</p>
                     * @param _isGlobal <p>是否对全局生效, 1：全局有效 0: 仅针对单台主机&#39;</p>
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取<p>白名单生效的机器信息列表</p>
                     * @return HostInfos <p>白名单生效的机器信息列表</p>
                     * 
                     */
                    std::vector<HostInfo> GetHostInfos() const;

                    /**
                     * 设置<p>白名单生效的机器信息列表</p>
                     * @param _hostInfos <p>白名单生效的机器信息列表</p>
                     * 
                     */
                    void SetHostInfos(const std::vector<HostInfo>& _hostInfos);

                    /**
                     * 判断参数 HostInfos 是否已赋值
                     * @return HostInfos 是否已赋值
                     * 
                     */
                    bool HostInfosHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>加白地域</p>
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>加白源IP，支持网段，多个IP以逗号隔开</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>加白用户名，多个用户名以逗号隔开</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>是否对全局生效, 1：全局有效 0: 仅针对单台主机&#39;</p>
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>白名单生效的机器信息列表</p>
                     */
                    std::vector<HostInfo> m_hostInfos;
                    bool m_hostInfosHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTLOGINWHITEOBJ_H_
