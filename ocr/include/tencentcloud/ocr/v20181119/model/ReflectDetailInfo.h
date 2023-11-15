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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_REFLECTDETAILINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_REFLECTDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 反光点覆盖区域详情结果
                */
                class ReflectDetailInfo : public AbstractModel
                {
                public:
                    ReflectDetailInfo();
                    ~ReflectDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NationalEmblem 国徽位置
Portrait 人像照片位置
RecognitionField 识别字段位置
Others 其他位置
                     * @return Position NationalEmblem 国徽位置
Portrait 人像照片位置
RecognitionField 识别字段位置
Others 其他位置
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置NationalEmblem 国徽位置
Portrait 人像照片位置
RecognitionField 识别字段位置
Others 其他位置
                     * @param _position NationalEmblem 国徽位置
Portrait 人像照片位置
RecognitionField 识别字段位置
Others 其他位置
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * NationalEmblem 国徽位置
Portrait 人像照片位置
RecognitionField 识别字段位置
Others 其他位置
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_REFLECTDETAILINFO_H_
