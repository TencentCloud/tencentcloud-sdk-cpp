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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_GETTRIALVERSIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_GETTRIALVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * GetTrialVersion返回参数结构体
                */
                class GetTrialVersionResponse : public AbstractModel
                {
                public:
                    GetTrialVersionResponse();
                    ~GetTrialVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取体验版本名称。
                     * @return TrialVersion 体验版本名称。
                     * 
                     */
                    std::string GetTrialVersion() const;

                    /**
                     * 判断参数 TrialVersion 是否已赋值
                     * @return TrialVersion 是否已赋值
                     * 
                     */
                    bool TrialVersionHasBeenSet() const;

                    /**
                     * 获取版本体验结束时间戳。
                     * @return TrialEndAt 版本体验结束时间戳。
                     * 
                     */
                    uint64_t GetTrialEndAt() const;

                    /**
                     * 判断参数 TrialEndAt 是否已赋值
                     * @return TrialEndAt 是否已赋值
                     * 
                     */
                    bool TrialEndAtHasBeenSet() const;

                private:

                    /**
                     * 体验版本名称。
                     */
                    std::string m_trialVersion;
                    bool m_trialVersionHasBeenSet;

                    /**
                     * 版本体验结束时间戳。
                     */
                    uint64_t m_trialEndAt;
                    bool m_trialEndAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_GETTRIALVERSIONRESPONSE_H_
