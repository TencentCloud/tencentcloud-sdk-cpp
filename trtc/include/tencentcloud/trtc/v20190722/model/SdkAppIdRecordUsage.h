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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDRECORDUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDRECORDUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RecordUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * SdkAppId级别录制时长数据。
                */
                class SdkAppIdRecordUsage : public AbstractModel
                {
                public:
                    SdkAppIdRecordUsage();
                    ~SdkAppIdRecordUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SdkAppId的值。
                     * @return SdkAppId SdkAppId的值。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置SdkAppId的值。
                     * @param _sdkAppId SdkAppId的值。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取统计的时间点数据。
                     * @return Usages 统计的时间点数据。
                     * 
                     */
                    std::vector<RecordUsage> GetUsages() const;

                    /**
                     * 设置统计的时间点数据。
                     * @param _usages 统计的时间点数据。
                     * 
                     */
                    void SetUsages(const std::vector<RecordUsage>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                private:

                    /**
                     * SdkAppId的值。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 统计的时间点数据。
                     */
                    std::vector<RecordUsage> m_usages;
                    bool m_usagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDRECORDUSAGE_H_
