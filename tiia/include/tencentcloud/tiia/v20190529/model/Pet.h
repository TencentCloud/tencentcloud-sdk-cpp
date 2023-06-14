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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_PET_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_PET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Rect.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 宠物具体信息
                */
                class Pet : public AbstractModel
                {
                public:
                    Pet();
                    ~Pet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的宠物类型（猫或者狗，暂不支持识别猫狗品种）。
                     * @return Name 识别出的宠物类型（猫或者狗，暂不支持识别猫狗品种）。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的宠物类型（猫或者狗，暂不支持识别猫狗品种）。
                     * @param _name 识别出的宠物类型（猫或者狗，暂不支持识别猫狗品种）。
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
                     * 获取识别服务给识别目标打出的置信度，范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * @return Score 识别服务给识别目标打出的置信度，范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置识别服务给识别目标打出的置信度，范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * @param _score 识别服务给识别目标打出的置信度，范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取识别目标在图片中的坐标。
                     * @return Location 识别目标在图片中的坐标。
                     * 
                     */
                    Rect GetLocation() const;

                    /**
                     * 设置识别目标在图片中的坐标。
                     * @param _location 识别目标在图片中的坐标。
                     * 
                     */
                    void SetLocation(const Rect& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 识别出的宠物类型（猫或者狗，暂不支持识别猫狗品种）。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别服务给识别目标打出的置信度，范围在0-100之间。值越高，表示目标为相应结果的可能性越高。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 识别目标在图片中的坐标。
                     */
                    Rect m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_PET_H_
