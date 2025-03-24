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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CAMPUS_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CAMPUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 园区信息
                */
                class Campus : public AbstractModel
                {
                public:
                    Campus();
                    ~Campus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取园区ID
                     * @return CampusId 园区ID
                     * 
                     */
                    uint64_t GetCampusId() const;

                    /**
                     * 设置园区ID
                     * @param _campusId 园区ID
                     * 
                     */
                    void SetCampusId(const uint64_t& _campusId);

                    /**
                     * 判断参数 CampusId 是否已赋值
                     * @return CampusId 是否已赋值
                     * 
                     */
                    bool CampusIdHasBeenSet() const;

                    /**
                     * 获取园区名称
                     * @return CampusName 园区名称
                     * 
                     */
                    std::string GetCampusName() const;

                    /**
                     * 设置园区名称
                     * @param _campusName 园区名称
                     * 
                     */
                    void SetCampusName(const std::string& _campusName);

                    /**
                     * 判断参数 CampusName 是否已赋值
                     * @return CampusName 是否已赋值
                     * 
                     */
                    bool CampusNameHasBeenSet() const;

                private:

                    /**
                     * 园区ID
                     */
                    uint64_t m_campusId;
                    bool m_campusIdHasBeenSet;

                    /**
                     * 园区名称
                     */
                    std::string m_campusName;
                    bool m_campusNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CAMPUS_H_
