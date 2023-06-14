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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEDETAILRESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/PersonCoordinate.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePersonTraceDetail返回参数结构体
                */
                class DescribePersonTraceDetailResponse : public AbstractModel
                {
                public:
                    DescribePersonTraceDetailResponse();
                    ~DescribePersonTraceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取卖场编码
                     * @return MallId 卖场编码
                     * 
                     */
                    std::string GetMallId() const;

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取客户编码
                     * @return PersonId 客户编码
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取轨迹编码
                     * @return TraceId 轨迹编码
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取轨迹点坐标序列
                     * @return CoordinateSet 轨迹点坐标序列
                     * 
                     */
                    std::vector<PersonCoordinate> GetCoordinateSet() const;

                    /**
                     * 判断参数 CoordinateSet 是否已赋值
                     * @return CoordinateSet 是否已赋值
                     * 
                     */
                    bool CoordinateSetHasBeenSet() const;

                private:

                    /**
                     * 卖场编码
                     */
                    std::string m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 客户编码
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 轨迹编码
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 轨迹点坐标序列
                     */
                    std::vector<PersonCoordinate> m_coordinateSet;
                    bool m_coordinateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEDETAILRESPONSE_H_
