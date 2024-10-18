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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REPLACE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REPLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Multimedia.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 多媒体占位符替换信息
                */
                class Replace : public AbstractModel
                {
                public:
                    Replace();
                    ~Replace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取占位符序号
                     * @return Id 占位符序号
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置占位符序号
                     * @param _id 占位符序号
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取多媒体详情
                     * @return Multimedia 多媒体详情
                     * 
                     */
                    std::vector<Multimedia> GetMultimedia() const;

                    /**
                     * 设置多媒体详情
                     * @param _multimedia 多媒体详情
                     * 
                     */
                    void SetMultimedia(const std::vector<Multimedia>& _multimedia);

                    /**
                     * 判断参数 Multimedia 是否已赋值
                     * @return Multimedia 是否已赋值
                     * 
                     */
                    bool MultimediaHasBeenSet() const;

                private:

                    /**
                     * 占位符序号
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 多媒体详情
                     */
                    std::vector<Multimedia> m_multimedia;
                    bool m_multimediaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REPLACE_H_
