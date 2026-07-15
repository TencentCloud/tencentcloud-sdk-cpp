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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEEDITVERSIONSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEEDITVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/EditVersions.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeEditVersions返回参数结构体
                */
                class DescribeEditVersionsResponse : public AbstractModel
                {
                public:
                    DescribeEditVersionsResponse();
                    ~DescribeEditVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>课堂ID</p>
                     * @return ClassId <p>课堂ID</p>
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
                     * 获取<p>当前课堂最新的版本号</p>
                     * @return LatestVersionNo <p>当前课堂最新的版本号</p>
                     * 
                     */
                    uint64_t GetLatestVersionNo() const;

                    /**
                     * 判断参数 LatestVersionNo 是否已赋值
                     * @return LatestVersionNo 是否已赋值
                     * 
                     */
                    bool LatestVersionNoHasBeenSet() const;

                    /**
                     * 获取<p>当前课堂设置的主版本号</p>
                     * @return MainVersion <p>当前课堂设置的主版本号</p>
                     * 
                     */
                    uint64_t GetMainVersion() const;

                    /**
                     * 判断参数 MainVersion 是否已赋值
                     * @return MainVersion 是否已赋值
                     * 
                     */
                    bool MainVersionHasBeenSet() const;

                    /**
                     * 获取<p>当前课堂所有版本信息</p>
                     * @return Versions <p>当前课堂所有版本信息</p>
                     * 
                     */
                    std::vector<EditVersions> GetVersions() const;

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                private:

                    /**
                     * <p>课堂ID</p>
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>当前课堂最新的版本号</p>
                     */
                    uint64_t m_latestVersionNo;
                    bool m_latestVersionNoHasBeenSet;

                    /**
                     * <p>当前课堂设置的主版本号</p>
                     */
                    uint64_t m_mainVersion;
                    bool m_mainVersionHasBeenSet;

                    /**
                     * <p>当前课堂所有版本信息</p>
                     */
                    std::vector<EditVersions> m_versions;
                    bool m_versionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEEDITVERSIONSRESPONSE_H_
