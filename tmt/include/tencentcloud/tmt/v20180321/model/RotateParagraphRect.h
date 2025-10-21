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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_ROTATEPARAGRAPHRECT_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_ROTATEPARAGRAPHRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/Coord.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 段落文本旋转信息
                */
                class RotateParagraphRect : public AbstractModel
                {
                public:
                    RotateParagraphRect();
                    ~RotateParagraphRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取段落文本坐标
                     * @return Coord 段落文本坐标
                     * 
                     */
                    std::vector<Coord> GetCoord() const;

                    /**
                     * 设置段落文本坐标
                     * @param _coord 段落文本坐标
                     * 
                     */
                    void SetCoord(const std::vector<Coord>& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     * 
                     */
                    bool CoordHasBeenSet() const;

                    /**
                     * 获取旋转角度
                     * @return TiltAngle 旋转角度
                     * 
                     */
                    double GetTiltAngle() const;

                    /**
                     * 设置旋转角度
                     * @param _tiltAngle 旋转角度
                     * 
                     */
                    void SetTiltAngle(const double& _tiltAngle);

                    /**
                     * 判断参数 TiltAngle 是否已赋值
                     * @return TiltAngle 是否已赋值
                     * 
                     */
                    bool TiltAngleHasBeenSet() const;

                    /**
                     * 获取段落文本信息是否有效
                     * @return Valid 段落文本信息是否有效
                     * 
                     */
                    bool GetValid() const;

                    /**
                     * 设置段落文本信息是否有效
                     * @param _valid 段落文本信息是否有效
                     * 
                     */
                    void SetValid(const bool& _valid);

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                private:

                    /**
                     * 段落文本坐标
                     */
                    std::vector<Coord> m_coord;
                    bool m_coordHasBeenSet;

                    /**
                     * 旋转角度
                     */
                    double m_tiltAngle;
                    bool m_tiltAngleHasBeenSet;

                    /**
                     * 段落文本信息是否有效
                     */
                    bool m_valid;
                    bool m_validHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_ROTATEPARAGRAPHRECT_H_
