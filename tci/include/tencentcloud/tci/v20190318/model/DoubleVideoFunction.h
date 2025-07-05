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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DOUBLEVIDEOFUNCTION_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DOUBLEVIDEOFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 双路混流视频集锦开关项
                */
                class DoubleVideoFunction : public AbstractModel
                {
                public:
                    DoubleVideoFunction();
                    ~DoubleVideoFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片头片尾增加图片开关
                     * @return EnableCoverPictures 片头片尾增加图片开关
                     * 
                     */
                    bool GetEnableCoverPictures() const;

                    /**
                     * 设置片头片尾增加图片开关
                     * @param _enableCoverPictures 片头片尾增加图片开关
                     * 
                     */
                    void SetEnableCoverPictures(const bool& _enableCoverPictures);

                    /**
                     * 判断参数 EnableCoverPictures 是否已赋值
                     * @return EnableCoverPictures 是否已赋值
                     * 
                     */
                    bool EnableCoverPicturesHasBeenSet() const;

                private:

                    /**
                     * 片头片尾增加图片开关
                     */
                    bool m_enableCoverPictures;
                    bool m_enableCoverPicturesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DOUBLEVIDEOFUNCTION_H_
