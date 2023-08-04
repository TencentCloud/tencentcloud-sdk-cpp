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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BASEAIRESULTINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BASEAIRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/Location.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 通用AI识别结果信息
                */
                class BaseAIResultInfo : public AbstractModel
                {
                public:
                    BaseAIResultInfo();
                    ~BaseAIResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称。返回值有人体识别结果名称(person)、宠物识别结果名称(cat和dog) 、车辆车牌识别结果名称(vehicle)
                     * @return Name 名称。返回值有人体识别结果名称(person)、宠物识别结果名称(cat和dog) 、车辆车牌识别结果名称(vehicle)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。返回值有人体识别结果名称(person)、宠物识别结果名称(cat和dog) 、车辆车牌识别结果名称(vehicle)
                     * @param _name 名称。返回值有人体识别结果名称(person)、宠物识别结果名称(cat和dog) 、车辆车牌识别结果名称(vehicle)
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取置信度
                     * @return Score 置信度
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置置信度
                     * @param _score 置信度
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取截图中坐标信息
                     * @return Location 截图中坐标信息
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置截图中坐标信息
                     * @param _location 截图中坐标信息
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 名称。返回值有人体识别结果名称(person)、宠物识别结果名称(cat和dog) 、车辆车牌识别结果名称(vehicle)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 置信度
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 截图中坐标信息
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BASEAIRESULTINFO_H_
