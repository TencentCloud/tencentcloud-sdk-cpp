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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFIRSTSCANBASELINERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFIRSTSCANBASELINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckFirstScanBaseline返回参数结构体
                */
                class CheckFirstScanBaselineResponse : public AbstractModel
                {
                public:
                    CheckFirstScanBaselineResponse();
                    ~CheckFirstScanBaselineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否是第一次检测 0：不是；1：是
                     * @return FirstScan 是否是第一次检测 0：不是；1：是
                     * 
                     */
                    uint64_t GetFirstScan() const;

                    /**
                     * 判断参数 FirstScan 是否已赋值
                     * @return FirstScan 是否已赋值
                     * 
                     */
                    bool FirstScanHasBeenSet() const;

                private:

                    /**
                     * 是否是第一次检测 0：不是；1：是
                     */
                    uint64_t m_firstScan;
                    bool m_firstScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKFIRSTSCANBASELINERESPONSE_H_
