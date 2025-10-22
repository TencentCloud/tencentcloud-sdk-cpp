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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RESPLIMIT_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RESPLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Limit.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 用户配额返回值
                */
                class RespLimit : public AbstractModel
                {
                public:
                    RespLimit();
                    ~RespLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额信息
                     * @return LimitInfo 配额信息
                     * 
                     */
                    std::vector<Limit> GetLimitInfo() const;

                    /**
                     * 设置配额信息
                     * @param _limitInfo 配额信息
                     * 
                     */
                    void SetLimitInfo(const std::vector<Limit>& _limitInfo);

                    /**
                     * 判断参数 LimitInfo 是否已赋值
                     * @return LimitInfo 是否已赋值
                     * 
                     */
                    bool LimitInfoHasBeenSet() const;

                private:

                    /**
                     * 配额信息
                     */
                    std::vector<Limit> m_limitInfo;
                    bool m_limitInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RESPLIMIT_H_
