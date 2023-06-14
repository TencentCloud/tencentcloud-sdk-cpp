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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EditMediaFileInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编辑视频任务的输入。
                */
                class EditMediaTaskInput : public AbstractModel
                {
                public:
                    EditMediaTaskInput();
                    ~EditMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的视频文件信息。
                     * @return FileInfoSet 输入的视频文件信息。
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfoSet() const;

                    /**
                     * 设置输入的视频文件信息。
                     * @param _fileInfoSet 输入的视频文件信息。
                     * 
                     */
                    void SetFileInfoSet(const std::vector<EditMediaFileInfo>& _fileInfoSet);

                    /**
                     * 判断参数 FileInfoSet 是否已赋值
                     * @return FileInfoSet 是否已赋值
                     * 
                     */
                    bool FileInfoSetHasBeenSet() const;

                private:

                    /**
                     * 输入的视频文件信息。
                     */
                    std::vector<EditMediaFileInfo> m_fileInfoSet;
                    bool m_fileInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASKINPUT_H_
