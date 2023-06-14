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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDPLANLIVECHANNELREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDPLANLIVECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifyBindPlanLiveChannel请求参数结构体
                */
                class ModifyBindPlanLiveChannelRequest : public AbstractModel
                {
                public:
                    ModifyBindPlanLiveChannelRequest();
                    ~ModifyBindPlanLiveChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播录制计划ID
                     * @return PlanId 直播录制计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置直播录制计划ID
                     * @param _planId 直播录制计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取1: 绑定 2: 解绑
                     * @return Type 1: 绑定 2: 解绑
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1: 绑定 2: 解绑
                     * @param _type 1: 绑定 2: 解绑
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
                     * 获取直播频道ID列表
                     * @return LiveChannelIds 直播频道ID列表
                     * 
                     */
                    std::vector<std::string> GetLiveChannelIds() const;

                    /**
                     * 设置直播频道ID列表
                     * @param _liveChannelIds 直播频道ID列表
                     * 
                     */
                    void SetLiveChannelIds(const std::vector<std::string>& _liveChannelIds);

                    /**
                     * 判断参数 LiveChannelIds 是否已赋值
                     * @return LiveChannelIds 是否已赋值
                     * 
                     */
                    bool LiveChannelIdsHasBeenSet() const;

                private:

                    /**
                     * 直播录制计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 1: 绑定 2: 解绑
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 直播频道ID列表
                     */
                    std::vector<std::string> m_liveChannelIds;
                    bool m_liveChannelIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDPLANLIVECHANNELREQUEST_H_
