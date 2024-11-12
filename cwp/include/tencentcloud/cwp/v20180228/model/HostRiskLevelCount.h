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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTRISKLEVELCOUNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTRISKLEVELCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 主机风险计数
                */
                class HostRiskLevelCount : public AbstractModel
                {
                public:
                    HostRiskLevelCount();
                    ~HostRiskLevelCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机ID
                     * @return HostId 主机ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机ID
                     * @param _hostId 主机ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return HostName 主机名
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名
                     * @param _hostName 主机名
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取严重个数
                     * @return SeriousCount 严重个数
                     * 
                     */
                    int64_t GetSeriousCount() const;

                    /**
                     * 设置严重个数
                     * @param _seriousCount 严重个数
                     * 
                     */
                    void SetSeriousCount(const int64_t& _seriousCount);

                    /**
                     * 判断参数 SeriousCount 是否已赋值
                     * @return SeriousCount 是否已赋值
                     * 
                     */
                    bool SeriousCountHasBeenSet() const;

                    /**
                     * 获取高危个数
                     * @return HighCount 高危个数
                     * 
                     */
                    int64_t GetHighCount() const;

                    /**
                     * 设置高危个数
                     * @param _highCount 高危个数
                     * 
                     */
                    void SetHighCount(const int64_t& _highCount);

                    /**
                     * 判断参数 HighCount 是否已赋值
                     * @return HighCount 是否已赋值
                     * 
                     */
                    bool HighCountHasBeenSet() const;

                    /**
                     * 获取中危个数
                     * @return MediumCount 中危个数
                     * 
                     */
                    int64_t GetMediumCount() const;

                    /**
                     * 设置中危个数
                     * @param _mediumCount 中危个数
                     * 
                     */
                    void SetMediumCount(const int64_t& _mediumCount);

                    /**
                     * 判断参数 MediumCount 是否已赋值
                     * @return MediumCount 是否已赋值
                     * 
                     */
                    bool MediumCountHasBeenSet() const;

                    /**
                     * 获取低危个数
                     * @return LowCount 低危个数
                     * 
                     */
                    int64_t GetLowCount() const;

                    /**
                     * 设置低危个数
                     * @param _lowCount 低危个数
                     * 
                     */
                    void SetLowCount(const int64_t& _lowCount);

                    /**
                     * 判断参数 LowCount 是否已赋值
                     * @return LowCount 是否已赋值
                     * 
                     */
                    bool LowCountHasBeenSet() const;

                private:

                    /**
                     * 主机ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 严重个数
                     */
                    int64_t m_seriousCount;
                    bool m_seriousCountHasBeenSet;

                    /**
                     * 高危个数
                     */
                    int64_t m_highCount;
                    bool m_highCountHasBeenSet;

                    /**
                     * 中危个数
                     */
                    int64_t m_mediumCount;
                    bool m_mediumCountHasBeenSet;

                    /**
                     * 低危个数
                     */
                    int64_t m_lowCount;
                    bool m_lowCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTRISKLEVELCOUNT_H_
