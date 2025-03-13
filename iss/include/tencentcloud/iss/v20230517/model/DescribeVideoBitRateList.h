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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEOBITRATELIST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEOBITRATELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/BitRateInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询视频通道码率的返回结果列表
                */
                class DescribeVideoBitRateList : public AbstractModel
                {
                public:
                    DescribeVideoBitRateList();
                    ~DescribeVideoBitRateList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道码率列表
                     * @return BitRates 通道码率列表
                     * 
                     */
                    std::vector<BitRateInfo> GetBitRates() const;

                    /**
                     * 设置通道码率列表
                     * @param _bitRates 通道码率列表
                     * 
                     */
                    void SetBitRates(const std::vector<BitRateInfo>& _bitRates);

                    /**
                     * 判断参数 BitRates 是否已赋值
                     * @return BitRates 是否已赋值
                     * 
                     */
                    bool BitRatesHasBeenSet() const;

                private:

                    /**
                     * 通道码率列表
                     */
                    std::vector<BitRateInfo> m_bitRates;
                    bool m_bitRatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEOBITRATELIST_H_
