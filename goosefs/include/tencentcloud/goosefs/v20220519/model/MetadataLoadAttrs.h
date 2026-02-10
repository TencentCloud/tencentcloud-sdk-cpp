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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_METADATALOADATTRS_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_METADATALOADATTRS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 元数据预热参数
                */
                class MetadataLoadAttrs : public AbstractModel
                {
                public:
                    MetadataLoadAttrs();
                    ~MetadataLoadAttrs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预热类型，枚举值 LoadByPath｜LoadByList
                     * @return LoadType 预热类型，枚举值 LoadByPath｜LoadByList
                     * 
                     */
                    std::string GetLoadType() const;

                    /**
                     * 设置预热类型，枚举值 LoadByPath｜LoadByList
                     * @param _loadType 预热类型，枚举值 LoadByPath｜LoadByList
                     * 
                     */
                    void SetLoadType(const std::string& _loadType);

                    /**
                     * 判断参数 LoadType 是否已赋值
                     * @return LoadType 是否已赋值
                     * 
                     */
                    bool LoadTypeHasBeenSet() const;

                    /**
                     * 获取是否跳过相同文件，默认为 true
                     * @return SkipIfExists 是否跳过相同文件，默认为 true
                     * 
                     */
                    bool GetSkipIfExists() const;

                    /**
                     * 设置是否跳过相同文件，默认为 true
                     * @param _skipIfExists 是否跳过相同文件，默认为 true
                     * 
                     */
                    void SetSkipIfExists(const bool& _skipIfExists);

                    /**
                     * 判断参数 SkipIfExists 是否已赋值
                     * @return SkipIfExists 是否已赋值
                     * 
                     */
                    bool SkipIfExistsHasBeenSet() const;

                    /**
                     * 获取预热路径，入参单条挂载路径，长度不能超过255个字符。入参数LoadType为LoadByPath，该参数不应为空
                     * @return LoadByPath 预热路径，入参单条挂载路径，长度不能超过255个字符。入参数LoadType为LoadByPath，该参数不应为空
                     * 
                     */
                    std::string GetLoadByPath() const;

                    /**
                     * 设置预热路径，入参单条挂载路径，长度不能超过255个字符。入参数LoadType为LoadByPath，该参数不应为空
                     * @param _loadByPath 预热路径，入参单条挂载路径，长度不能超过255个字符。入参数LoadType为LoadByPath，该参数不应为空
                     * 
                     */
                    void SetLoadByPath(const std::string& _loadByPath);

                    /**
                     * 判断参数 LoadByPath 是否已赋值
                     * @return LoadByPath 是否已赋值
                     * 
                     */
                    bool LoadByPathHasBeenSet() const;

                    /**
                     * 获取通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空
                     * @return LoadByList 通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空
                     * 
                     */
                    std::string GetLoadByList() const;

                    /**
                     * 设置通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空
                     * @param _loadByList 通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空
                     * 
                     */
                    void SetLoadByList(const std::string& _loadByList);

                    /**
                     * 判断参数 LoadByList 是否已赋值
                     * @return LoadByList 是否已赋值
                     * 
                     */
                    bool LoadByListHasBeenSet() const;

                private:

                    /**
                     * 预热类型，枚举值 LoadByPath｜LoadByList
                     */
                    std::string m_loadType;
                    bool m_loadTypeHasBeenSet;

                    /**
                     * 是否跳过相同文件，默认为 true
                     */
                    bool m_skipIfExists;
                    bool m_skipIfExistsHasBeenSet;

                    /**
                     * 预热路径，入参单条挂载路径，长度不能超过255个字符。入参数LoadType为LoadByPath，该参数不应为空
                     */
                    std::string m_loadByPath;
                    bool m_loadByPathHasBeenSet;

                    /**
                     * 通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空
                     */
                    std::string m_loadByList;
                    bool m_loadByListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_METADATALOADATTRS_H_
