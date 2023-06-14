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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_ACTIONINFO_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_ACTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ActionType.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 大教室场景肢体动作识别信息
                */
                class ActionInfo : public AbstractModel
                {
                public:
                    ActionInfo();
                    ~ActionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取躯体动作识别结果，包含坐着（sit）、站立（stand）和趴睡（sleep）
                     * @return BodyPosture 躯体动作识别结果，包含坐着（sit）、站立（stand）和趴睡（sleep）
                     * 
                     */
                    ActionType GetBodyPosture() const;

                    /**
                     * 设置躯体动作识别结果，包含坐着（sit）、站立（stand）和趴睡（sleep）
                     * @param _bodyPosture 躯体动作识别结果，包含坐着（sit）、站立（stand）和趴睡（sleep）
                     * 
                     */
                    void SetBodyPosture(const ActionType& _bodyPosture);

                    /**
                     * 判断参数 BodyPosture 是否已赋值
                     * @return BodyPosture 是否已赋值
                     * 
                     */
                    bool BodyPostureHasBeenSet() const;

                    /**
                     * 获取举手识别结果，包含举手（hand）和未检测到举手（nothand）
                     * @return Handup 举手识别结果，包含举手（hand）和未检测到举手（nothand）
                     * 
                     */
                    ActionType GetHandup() const;

                    /**
                     * 设置举手识别结果，包含举手（hand）和未检测到举手（nothand）
                     * @param _handup 举手识别结果，包含举手（hand）和未检测到举手（nothand）
                     * 
                     */
                    void SetHandup(const ActionType& _handup);

                    /**
                     * 判断参数 Handup 是否已赋值
                     * @return Handup 是否已赋值
                     * 
                     */
                    bool HandupHasBeenSet() const;

                    /**
                     * 获取是否低头识别结果，包含抬头（lookingahead）和未检测到抬头（notlookingahead）
                     * @return LookHead 是否低头识别结果，包含抬头（lookingahead）和未检测到抬头（notlookingahead）
                     * 
                     */
                    ActionType GetLookHead() const;

                    /**
                     * 设置是否低头识别结果，包含抬头（lookingahead）和未检测到抬头（notlookingahead）
                     * @param _lookHead 是否低头识别结果，包含抬头（lookingahead）和未检测到抬头（notlookingahead）
                     * 
                     */
                    void SetLookHead(const ActionType& _lookHead);

                    /**
                     * 判断参数 LookHead 是否已赋值
                     * @return LookHead 是否已赋值
                     * 
                     */
                    bool LookHeadHasBeenSet() const;

                    /**
                     * 获取是否写字识别结果，包含写字（write）和未检测到写字（notlookingahead）
                     * @return Writing 是否写字识别结果，包含写字（write）和未检测到写字（notlookingahead）
                     * 
                     */
                    ActionType GetWriting() const;

                    /**
                     * 设置是否写字识别结果，包含写字（write）和未检测到写字（notlookingahead）
                     * @param _writing 是否写字识别结果，包含写字（write）和未检测到写字（notlookingahead）
                     * 
                     */
                    void SetWriting(const ActionType& _writing);

                    /**
                     * 判断参数 Writing 是否已赋值
                     * @return Writing 是否已赋值
                     * 
                     */
                    bool WritingHasBeenSet() const;

                    /**
                     * 获取动作图像高度
                     * @return Height 动作图像高度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置动作图像高度
                     * @param _height 动作图像高度
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取动作出现图像的左侧起始坐标位置
                     * @return Left 动作出现图像的左侧起始坐标位置
                     * 
                     */
                    int64_t GetLeft() const;

                    /**
                     * 设置动作出现图像的左侧起始坐标位置
                     * @param _left 动作出现图像的左侧起始坐标位置
                     * 
                     */
                    void SetLeft(const int64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取动作出现图像的上侧起始侧坐标位置
                     * @return Top 动作出现图像的上侧起始侧坐标位置
                     * 
                     */
                    int64_t GetTop() const;

                    /**
                     * 设置动作出现图像的上侧起始侧坐标位置
                     * @param _top 动作出现图像的上侧起始侧坐标位置
                     * 
                     */
                    void SetTop(const int64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取动作图像宽度
                     * @return Width 动作图像宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置动作图像宽度
                     * @param _width 动作图像宽度
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * 躯体动作识别结果，包含坐着（sit）、站立（stand）和趴睡（sleep）
                     */
                    ActionType m_bodyPosture;
                    bool m_bodyPostureHasBeenSet;

                    /**
                     * 举手识别结果，包含举手（hand）和未检测到举手（nothand）
                     */
                    ActionType m_handup;
                    bool m_handupHasBeenSet;

                    /**
                     * 是否低头识别结果，包含抬头（lookingahead）和未检测到抬头（notlookingahead）
                     */
                    ActionType m_lookHead;
                    bool m_lookHeadHasBeenSet;

                    /**
                     * 是否写字识别结果，包含写字（write）和未检测到写字（notlookingahead）
                     */
                    ActionType m_writing;
                    bool m_writingHasBeenSet;

                    /**
                     * 动作图像高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 动作出现图像的左侧起始坐标位置
                     */
                    int64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 动作出现图像的上侧起始侧坐标位置
                     */
                    int64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 动作图像宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_ACTIONINFO_H_
