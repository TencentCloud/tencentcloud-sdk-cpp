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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSMOVEALERT_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSMOVEALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 移动告警
                */
                class CreateCameraAlertsMoveAlert : public AbstractModel
                {
                public:
                    CreateCameraAlertsMoveAlert();
                    ~CreateCameraAlertsMoveAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否移动
                     * @return Move 是否移动
                     * 
                     */
                    bool GetMove() const;

                    /**
                     * 设置是否移动
                     * @param _move 是否移动
                     * 
                     */
                    void SetMove(const bool& _move);

                    /**
                     * 判断参数 Move 是否已赋值
                     * @return Move 是否已赋值
                     * 
                     */
                    bool MoveHasBeenSet() const;

                    /**
                     * 获取是否移动置信度
                     * @return MoveConfidence 是否移动置信度
                     * 
                     */
                    double GetMoveConfidence() const;

                    /**
                     * 设置是否移动置信度
                     * @param _moveConfidence 是否移动置信度
                     * 
                     */
                    void SetMoveConfidence(const double& _moveConfidence);

                    /**
                     * 判断参数 MoveConfidence 是否已赋值
                     * @return MoveConfidence 是否已赋值
                     * 
                     */
                    bool MoveConfidenceHasBeenSet() const;

                private:

                    /**
                     * 是否移动
                     */
                    bool m_move;
                    bool m_moveHasBeenSet;

                    /**
                     * 是否移动置信度
                     */
                    double m_moveConfidence;
                    bool m_moveConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSMOVEALERT_H_
