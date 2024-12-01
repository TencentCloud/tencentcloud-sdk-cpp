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
                     * 获取左眼
                     * @return Left 左眼
                     * 
                     */
                    EyeChildItem GetLeft() const;

                    /**
                     * 设置左眼
                     * @param _left 左眼
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
                     * 获取右眼
                     * @return Right 右眼
                     * 
                     */
                    EyeChildItem GetRight() const;

                    /**
                     * 设置右眼
                     * @param _right 右眼
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
                     * 获取瞳距
                     * @return Pd 瞳距
                     * 
                     */
                    BaseItem2 GetPd() const;

                    /**
                     * 设置瞳距
                     * @param _pd 瞳距
                     * 
                     */
                    void SetPd(const BaseItem2& _pd);

                    /**
                     * 判断参数 Pd 是否已赋值
                     * @return Pd 是否已赋值
                     * 
                     */
                    bool PdHasBeenSet() const;

                private:

                    /**
                     * 左眼
                     */
                    EyeChildItem m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 右眼
                     */
                    EyeChildItem m_right;
                    bool m_rightHasBeenSet;

                    /**
                     * 瞳距
                     */
                    BaseItem2 m_pd;
                    bool m_pdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEM_H_
