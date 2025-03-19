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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMLEVELINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMLEVELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 告警级别详情
                */
                class AlarmLevelInfo : public AbstractModel
                {
                public:
                    AlarmLevelInfo();
                    ~AlarmLevelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取级别id
                     * @return LevelId 级别id
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置级别id
                     * @param _levelId 级别id
                     * 
                     */
                    void SetLevelId(const int64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取级别名称
                     * @return LevelName 级别名称
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置级别名称
                     * @param _levelName 级别名称
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                private:

                    /**
                     * 级别id
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 级别名称
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMLEVELINFO_H_
