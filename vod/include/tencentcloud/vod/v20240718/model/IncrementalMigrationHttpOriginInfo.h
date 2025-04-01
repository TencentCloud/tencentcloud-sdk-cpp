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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGININFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpEndpointInfo.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移源站信息。
                */
                class IncrementalMigrationHttpOriginInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginInfo();
                    ~IncrementalMigrationHttpOriginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取增量迁移源站地址信息。
                     * @return EndpointInfo 增量迁移源站地址信息。
                     * 
                     */
                    IncrementalMigrationHttpEndpointInfo GetEndpointInfo() const;

                    /**
                     * 设置增量迁移源站地址信息。
                     * @param _endpointInfo 增量迁移源站地址信息。
                     * 
                     */
                    void SetEndpointInfo(const IncrementalMigrationHttpEndpointInfo& _endpointInfo);

                    /**
                     * 判断参数 EndpointInfo 是否已赋值
                     * @return EndpointInfo 是否已赋值
                     * 
                     */
                    bool EndpointInfoHasBeenSet() const;

                    /**
                     * 获取增量迁移源站文件信息。
                     * @return FileInfo 增量迁移源站文件信息。
                     * 
                     */
                    IncrementalMigrationOriginFileInfo GetFileInfo() const;

                    /**
                     * 设置增量迁移源站文件信息。
                     * @param _fileInfo 增量迁移源站文件信息。
                     * 
                     */
                    void SetFileInfo(const IncrementalMigrationOriginFileInfo& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                private:

                    /**
                     * 增量迁移源站地址信息。
                     */
                    IncrementalMigrationHttpEndpointInfo m_endpointInfo;
                    bool m_endpointInfoHasBeenSet;

                    /**
                     * 增量迁移源站文件信息。
                     */
                    IncrementalMigrationOriginFileInfo m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGININFO_H_
