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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBERECORDSTREAMRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBERECORDSTREAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/SingleStreamInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeRecordStream返回参数结构体
                */
                class DescribeRecordStreamResponse : public AbstractModel
                {
                public:
                    DescribeRecordStreamResponse();
                    ~DescribeRecordStreamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取学校ID
                     * @return SchoolId 学校ID
                     * 
                     */
                    uint64_t GetSchoolId() const;

                    /**
                     * 判断参数 SchoolId 是否已赋值
                     * @return SchoolId 是否已赋值
                     * 
                     */
                    bool SchoolIdHasBeenSet() const;

                    /**
                     * 获取课堂ID
                     * @return ClassId 课堂ID
                     * 
                     */
                    uint64_t GetClassId() const;

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取课堂类型
                     * @return ClassType 课堂类型
                     * 
                     */
                    uint64_t GetClassType() const;

                    /**
                     * 判断参数 ClassType 是否已赋值
                     * @return ClassType 是否已赋值
                     * 
                     */
                    bool ClassTypeHasBeenSet() const;

                    /**
                     * 获取用户流信息
                     * @return StreamInfo 用户流信息
                     * 
                     */
                    std::vector<SingleStreamInfo> GetStreamInfo() const;

                    /**
                     * 判断参数 StreamInfo 是否已赋值
                     * @return StreamInfo 是否已赋值
                     * 
                     */
                    bool StreamInfoHasBeenSet() const;

                private:

                    /**
                     * 学校ID
                     */
                    uint64_t m_schoolId;
                    bool m_schoolIdHasBeenSet;

                    /**
                     * 课堂ID
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 课堂类型
                     */
                    uint64_t m_classType;
                    bool m_classTypeHasBeenSet;

                    /**
                     * 用户流信息
                     */
                    std::vector<SingleStreamInfo> m_streamInfo;
                    bool m_streamInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBERECORDSTREAMRESPONSE_H_
