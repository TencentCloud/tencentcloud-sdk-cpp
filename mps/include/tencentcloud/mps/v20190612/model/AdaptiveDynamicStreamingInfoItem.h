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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 转自适应码流信息
                */
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转自适应码流规格。
                     * @return Definition 转自适应码流规格。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流规格。
                     * @param _definition 转自适应码流规格。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取打包格式，可能为 HLS和 MPEG-DASH 两种。
                     * @return Package 打包格式，可能为 HLS和 MPEG-DASH 两种。
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置打包格式，可能为 HLS和 MPEG-DASH 两种。
                     * @param _package 打包格式，可能为 HLS和 MPEG-DASH 两种。
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取播放路径。
                     * @return Path 播放路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置播放路径。
                     * @param _path 播放路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取自适应码流文件的存储位置。
                     * @return Storage 自适应码流文件的存储位置。
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置自适应码流文件的存储位置。
                     * @param _storage 自适应码流文件的存储位置。
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * 转自适应码流规格。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 打包格式，可能为 HLS和 MPEG-DASH 两种。
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 播放路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 自适应码流文件的存储位置。
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
