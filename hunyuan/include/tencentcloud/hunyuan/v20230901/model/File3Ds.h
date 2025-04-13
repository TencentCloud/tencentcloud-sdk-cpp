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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILE3DS_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILE3DS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/File3D.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 3D文件列表
                */
                class File3Ds : public AbstractModel
                {
                public:
                    File3Ds();
                    ~File3Ds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取3D文件列表
                     * @return File3D 3D文件列表
                     * 
                     */
                    std::vector<File3D> GetFile3D() const;

                    /**
                     * 设置3D文件列表
                     * @param _file3D 3D文件列表
                     * 
                     */
                    void SetFile3D(const std::vector<File3D>& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                private:

                    /**
                     * 3D文件列表
                     */
                    std::vector<File3D> m_file3D;
                    bool m_file3DHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILE3DS_H_
