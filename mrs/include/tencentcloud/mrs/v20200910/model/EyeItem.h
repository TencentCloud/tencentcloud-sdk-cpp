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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/EyeChildItem.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem2.h>
#include <tencentcloud/mrs/v20200910/model/EyeFinalItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 眼科结构体
                */
                class EyeItem : public AbstractModel
                {
                public:
                    EyeItem();
                    ~EyeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>左眼</p>
                     * @return Left <p>左眼</p>
                     * 
                     */
                    EyeChildItem GetLeft() const;

                    /**
                     * 设置<p>左眼</p>
                     * @param _left <p>左眼</p>
                     * 
                     */
                    void SetLeft(const EyeChildItem& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取<p>右眼</p>
                     * @return Right <p>右眼</p>
                     * 
                     */
                    EyeChildItem GetRight() const;

                    /**
                     * 设置<p>右眼</p>
                     * @param _right <p>右眼</p>
                     * 
                     */
                    void SetRight(const EyeChildItem& _right);

                    /**
                     * 判断参数 Right 是否已赋值
                     * @return Right 是否已赋值
                     * 
                     */
                    bool RightHasBeenSet() const;

                    /**
                     * 获取<p>瞳距</p>
                     * @return Pd <p>瞳距</p>
                     * 
                     */
                    BaseItem2 GetPd() const;

                    /**
                     * 设置<p>瞳距</p>
                     * @param _pd <p>瞳距</p>
                     * 
                     */
                    void SetPd(const BaseItem2& _pd);

                    /**
                     * 判断参数 Pd 是否已赋值
                     * @return Pd 是否已赋值
                     * 
                     */
                    bool PdHasBeenSet() const;

                    /**
                     * 获取<p>右眼平均后结果</p>
                     * @return RightFinal <p>右眼平均后结果</p>
                     * 
                     */
                    EyeFinalItem GetRightFinal() const;

                    /**
                     * 设置<p>右眼平均后结果</p>
                     * @param _rightFinal <p>右眼平均后结果</p>
                     * 
                     */
                    void SetRightFinal(const EyeFinalItem& _rightFinal);

                    /**
                     * 判断参数 RightFinal 是否已赋值
                     * @return RightFinal 是否已赋值
                     * 
                     */
                    bool RightFinalHasBeenSet() const;

                    /**
                     * 获取<p>左眼平均后结果</p>
                     * @return LeftFinal <p>左眼平均后结果</p>
                     * 
                     */
                    EyeFinalItem GetLeftFinal() const;

                    /**
                     * 设置<p>左眼平均后结果</p>
                     * @param _leftFinal <p>左眼平均后结果</p>
                     * 
                     */
                    void SetLeftFinal(const EyeFinalItem& _leftFinal);

                    /**
                     * 判断参数 LeftFinal 是否已赋值
                     * @return LeftFinal 是否已赋值
                     * 
                     */
                    bool LeftFinalHasBeenSet() const;

                private:

                    /**
                     * <p>左眼</p>
                     */
                    EyeChildItem m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * <p>右眼</p>
                     */
                    EyeChildItem m_right;
                    bool m_rightHasBeenSet;

                    /**
                     * <p>瞳距</p>
                     */
                    BaseItem2 m_pd;
                    bool m_pdHasBeenSet;

                    /**
                     * <p>右眼平均后结果</p>
                     */
                    EyeFinalItem m_rightFinal;
                    bool m_rightFinalHasBeenSet;

                    /**
                     * <p>左眼平均后结果</p>
                     */
                    EyeFinalItem m_leftFinal;
                    bool m_leftFinalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEM_H_
