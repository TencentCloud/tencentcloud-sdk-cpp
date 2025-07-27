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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECLOUDEFFECTLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECLOUDEFFECTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CloudEffectInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveCloudEffectList返回参数结构体
                */
                class DescribeLiveCloudEffectListResponse : public AbstractModel
                {
                public:
                    DescribeLiveCloudEffectListResponse();
                    ~DescribeLiveCloudEffectListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云端特效信息列表。
                     * @return InfoList 云端特效信息列表。
                     * 
                     */
                    std::vector<CloudEffectInfo> GetInfoList() const;

                    /**
                     * 判断参数 InfoList 是否已赋值
                     * @return InfoList 是否已赋值
                     * 
                     */
                    bool InfoListHasBeenSet() const;

                    /**
                     * 获取允许创建的云端特效个数。
                     * @return EnableCreateNum 允许创建的云端特效个数。
                     * 
                     */
                    int64_t GetEnableCreateNum() const;

                    /**
                     * 判断参数 EnableCreateNum 是否已赋值
                     * @return EnableCreateNum 是否已赋值
                     * 
                     */
                    bool EnableCreateNumHasBeenSet() const;

                    /**
                     * 获取当前已有的特效总个数。
                     * @return TotalNum 当前已有的特效总个数。
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * 云端特效信息列表。
                     */
                    std::vector<CloudEffectInfo> m_infoList;
                    bool m_infoListHasBeenSet;

                    /**
                     * 允许创建的云端特效个数。
                     */
                    int64_t m_enableCreateNum;
                    bool m_enableCreateNumHasBeenSet;

                    /**
                     * 当前已有的特效总个数。
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVECLOUDEFFECTLISTRESPONSE_H_
