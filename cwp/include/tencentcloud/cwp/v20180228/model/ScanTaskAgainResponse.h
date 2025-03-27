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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINRESPONSE_H_

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
                * ScanTaskAgain返回参数结构体
                */
                class ScanTaskAgainResponse : public AbstractModel
                {
                public:
                    ScanTaskAgainResponse();
                    ~ScanTaskAgainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下发成功的主机数
                     * @return SuccessCount 下发成功的主机数
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取基础版(不支持扫描)主机数
                     * @return BasicVersionCount 基础版(不支持扫描)主机数
                     * 
                     */
                    uint64_t GetBasicVersionCount() const;

                    /**
                     * 判断参数 BasicVersionCount 是否已赋值
                     * @return BasicVersionCount 是否已赋值
                     * 
                     */
                    bool BasicVersionCountHasBeenSet() const;

                private:

                    /**
                     * 下发成功的主机数
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 基础版(不支持扫描)主机数
                     */
                    uint64_t m_basicVersionCount;
                    bool m_basicVersionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINRESPONSE_H_
