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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDTRANSCODETIMEUSAGESINFO_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDTRANSCODETIMEUSAGESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SdkAppIdTrtcMcuTranscodeTimeUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 旁路转码时长的查询结果
                */
                class OneSdkAppIdTranscodeTimeUsagesInfo : public AbstractModel
                {
                public:
                    OneSdkAppIdTranscodeTimeUsagesInfo();
                    ~OneSdkAppIdTranscodeTimeUsagesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旁路转码时长查询结果数组
                     * @return SdkAppIdTranscodeTimeUsages 旁路转码时长查询结果数组
                     * 
                     */
                    std::vector<SdkAppIdTrtcMcuTranscodeTimeUsage> GetSdkAppIdTranscodeTimeUsages() const;

                    /**
                     * 设置旁路转码时长查询结果数组
                     * @param _sdkAppIdTranscodeTimeUsages 旁路转码时长查询结果数组
                     * 
                     */
                    void SetSdkAppIdTranscodeTimeUsages(const std::vector<SdkAppIdTrtcMcuTranscodeTimeUsage>& _sdkAppIdTranscodeTimeUsages);

                    /**
                     * 判断参数 SdkAppIdTranscodeTimeUsages 是否已赋值
                     * @return SdkAppIdTranscodeTimeUsages 是否已赋值
                     * 
                     */
                    bool SdkAppIdTranscodeTimeUsagesHasBeenSet() const;

                    /**
                     * 获取查询记录数量
                     * @return TotalNum 查询记录数量
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置查询记录数量
                     * @param _totalNum 查询记录数量
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取所查询的应用ID，可能值为:1-应用的应用ID，2-total，显示为total则表示查询的是所有应用的用量合计值。
                     * @return SdkAppId 所查询的应用ID，可能值为:1-应用的应用ID，2-total，显示为total则表示查询的是所有应用的用量合计值。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置所查询的应用ID，可能值为:1-应用的应用ID，2-total，显示为total则表示查询的是所有应用的用量合计值。
                     * @param _sdkAppId 所查询的应用ID，可能值为:1-应用的应用ID，2-total，显示为total则表示查询的是所有应用的用量合计值。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 旁路转码时长查询结果数组
                     */
                    std::vector<SdkAppIdTrtcMcuTranscodeTimeUsage> m_sdkAppIdTranscodeTimeUsages;
                    bool m_sdkAppIdTranscodeTimeUsagesHasBeenSet;

                    /**
                     * 查询记录数量
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 所查询的应用ID，可能值为:1-应用的应用ID，2-total，显示为total则表示查询的是所有应用的用量合计值。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ONESDKAPPIDTRANSCODETIMEUSAGESINFO_H_
