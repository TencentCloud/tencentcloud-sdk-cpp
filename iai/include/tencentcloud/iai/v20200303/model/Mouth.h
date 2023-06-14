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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MOUTH_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MOUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 嘴巴信息。
                */
                class Mouth : public AbstractModel
                {
                public:
                    Mouth();
                    ~Mouth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否张嘴信息。
AttributeItem对应的Type为 —— 0：不张嘴，1：张嘴。
                     * @return MouthOpen 是否张嘴信息。
AttributeItem对应的Type为 —— 0：不张嘴，1：张嘴。
                     * 
                     */
                    AttributeItem GetMouthOpen() const;

                    /**
                     * 设置是否张嘴信息。
AttributeItem对应的Type为 —— 0：不张嘴，1：张嘴。
                     * @param _mouthOpen 是否张嘴信息。
AttributeItem对应的Type为 —— 0：不张嘴，1：张嘴。
                     * 
                     */
                    void SetMouthOpen(const AttributeItem& _mouthOpen);

                    /**
                     * 判断参数 MouthOpen 是否已赋值
                     * @return MouthOpen 是否已赋值
                     * 
                     */
                    bool MouthOpenHasBeenSet() const;

                private:

                    /**
                     * 是否张嘴信息。
AttributeItem对应的Type为 —— 0：不张嘴，1：张嘴。
                     */
                    AttributeItem m_mouthOpen;
                    bool m_mouthOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MOUTH_H_
