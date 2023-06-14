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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_EYE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_EYE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/AttributeItem.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 眼睛信息
                */
                class Eye : public AbstractModel
                {
                public:
                    Eye();
                    ~Eye() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别是否佩戴眼镜。
AttributeItem对应的Type为 —— 0：无眼镜，1：普通眼镜，2：墨镜
                     * @return Glass 识别是否佩戴眼镜。
AttributeItem对应的Type为 —— 0：无眼镜，1：普通眼镜，2：墨镜
                     * 
                     */
                    AttributeItem GetGlass() const;

                    /**
                     * 设置识别是否佩戴眼镜。
AttributeItem对应的Type为 —— 0：无眼镜，1：普通眼镜，2：墨镜
                     * @param _glass 识别是否佩戴眼镜。
AttributeItem对应的Type为 —— 0：无眼镜，1：普通眼镜，2：墨镜
                     * 
                     */
                    void SetGlass(const AttributeItem& _glass);

                    /**
                     * 判断参数 Glass 是否已赋值
                     * @return Glass 是否已赋值
                     * 
                     */
                    bool GlassHasBeenSet() const;

                    /**
                     * 获取识别眼睛的睁开、闭合状态。
AttributeItem对应的Type为 —— 0：睁开，1：闭眼
                     * @return EyeOpen 识别眼睛的睁开、闭合状态。
AttributeItem对应的Type为 —— 0：睁开，1：闭眼
                     * 
                     */
                    AttributeItem GetEyeOpen() const;

                    /**
                     * 设置识别眼睛的睁开、闭合状态。
AttributeItem对应的Type为 —— 0：睁开，1：闭眼
                     * @param _eyeOpen 识别眼睛的睁开、闭合状态。
AttributeItem对应的Type为 —— 0：睁开，1：闭眼
                     * 
                     */
                    void SetEyeOpen(const AttributeItem& _eyeOpen);

                    /**
                     * 判断参数 EyeOpen 是否已赋值
                     * @return EyeOpen 是否已赋值
                     * 
                     */
                    bool EyeOpenHasBeenSet() const;

                    /**
                     * 获取识别是否双眼皮。
AttributeItem对应的Type为 —— 0：无，1：有。
                     * @return EyelidType 识别是否双眼皮。
AttributeItem对应的Type为 —— 0：无，1：有。
                     * 
                     */
                    AttributeItem GetEyelidType() const;

                    /**
                     * 设置识别是否双眼皮。
AttributeItem对应的Type为 —— 0：无，1：有。
                     * @param _eyelidType 识别是否双眼皮。
AttributeItem对应的Type为 —— 0：无，1：有。
                     * 
                     */
                    void SetEyelidType(const AttributeItem& _eyelidType);

                    /**
                     * 判断参数 EyelidType 是否已赋值
                     * @return EyelidType 是否已赋值
                     * 
                     */
                    bool EyelidTypeHasBeenSet() const;

                    /**
                     * 获取眼睛大小。
AttributeItem对应的Type为 —— 0：小眼睛，1：普通眼睛，2：大眼睛。
                     * @return EyeSize 眼睛大小。
AttributeItem对应的Type为 —— 0：小眼睛，1：普通眼睛，2：大眼睛。
                     * 
                     */
                    AttributeItem GetEyeSize() const;

                    /**
                     * 设置眼睛大小。
AttributeItem对应的Type为 —— 0：小眼睛，1：普通眼睛，2：大眼睛。
                     * @param _eyeSize 眼睛大小。
AttributeItem对应的Type为 —— 0：小眼睛，1：普通眼睛，2：大眼睛。
                     * 
                     */
                    void SetEyeSize(const AttributeItem& _eyeSize);

                    /**
                     * 判断参数 EyeSize 是否已赋值
                     * @return EyeSize 是否已赋值
                     * 
                     */
                    bool EyeSizeHasBeenSet() const;

                private:

                    /**
                     * 识别是否佩戴眼镜。
AttributeItem对应的Type为 —— 0：无眼镜，1：普通眼镜，2：墨镜
                     */
                    AttributeItem m_glass;
                    bool m_glassHasBeenSet;

                    /**
                     * 识别眼睛的睁开、闭合状态。
AttributeItem对应的Type为 —— 0：睁开，1：闭眼
                     */
                    AttributeItem m_eyeOpen;
                    bool m_eyeOpenHasBeenSet;

                    /**
                     * 识别是否双眼皮。
AttributeItem对应的Type为 —— 0：无，1：有。
                     */
                    AttributeItem m_eyelidType;
                    bool m_eyelidTypeHasBeenSet;

                    /**
                     * 眼睛大小。
AttributeItem对应的Type为 —— 0：小眼睛，1：普通眼睛，2：大眼睛。
                     */
                    AttributeItem m_eyeSize;
                    bool m_eyeSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_EYE_H_
