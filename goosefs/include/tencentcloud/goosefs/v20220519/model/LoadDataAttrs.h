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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADDATAATTRS_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADDATAATTRS_H_

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
                * 数据预热任务参数
                */
                class LoadDataAttrs : public AbstractModel
                {
                public:
                    LoadDataAttrs();
                    ~LoadDataAttrs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预热类型，枚举值 LoadByPath｜LoadByList</p>
                     * @return LoadType <p>预热类型，枚举值 LoadByPath｜LoadByList</p>
                     * 
                     */
                    std::string GetLoadType() const;

                    /**
                     * 设置<p>预热类型，枚举值 LoadByPath｜LoadByList</p>
                     * @param _loadType <p>预热类型，枚举值 LoadByPath｜LoadByList</p>
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
                     * 获取<p>是否跳过相同文件，默认为 true</p>
                     * @return SkipIfExists <p>是否跳过相同文件，默认为 true</p>
                     * 
                     */
                    bool GetSkipIfExists() const;

                    /**
                     * 设置<p>是否跳过相同文件，默认为 true</p>
                     * @param _skipIfExists <p>是否跳过相同文件，默认为 true</p>
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
                     * 获取<p>预热路径，入参单条挂载路径。入参数LoadType为LoadByPath，该参数不应为空</p>
                     * @return LoadByPath <p>预热路径，入参单条挂载路径。入参数LoadType为LoadByPath，该参数不应为空</p>
                     * 
                     */
                    std::string GetLoadByPath() const;

                    /**
                     * 设置<p>预热路径，入参单条挂载路径。入参数LoadType为LoadByPath，该参数不应为空</p>
                     * @param _loadByPath <p>预热路径，入参单条挂载路径。入参数LoadType为LoadByPath，该参数不应为空</p>
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
                     * 获取<p>通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空</p>
                     * @return LoadByList <p>通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空</p>
                     * 
                     */
                    std::string GetLoadByList() const;

                    /**
                     * 设置<p>通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空</p>
                     * @param _loadByList <p>通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空</p>
                     * 
                     */
                    void SetLoadByList(const std::string& _loadByList);

                    /**
                     * 判断参数 LoadByList 是否已赋值
                     * @return LoadByList 是否已赋值
                     * 
                     */
                    bool LoadByListHasBeenSet() const;

                    /**
                     * 获取<p>副本数配置，枚举值，可选值 SingleReplica（单副本，默认）｜MaxReplica（最大副本）</p>
                     * @return Replica <p>副本数配置，枚举值，可选值 SingleReplica（单副本，默认）｜MaxReplica（最大副本）</p>
                     * 
                     */
                    std::string GetReplica() const;

                    /**
                     * 设置<p>副本数配置，枚举值，可选值 SingleReplica（单副本，默认）｜MaxReplica（最大副本）</p>
                     * @param _replica <p>副本数配置，枚举值，可选值 SingleReplica（单副本，默认）｜MaxReplica（最大副本）</p>
                     * 
                     */
                    void SetReplica(const std::string& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     * 
                     */
                    bool ReplicaHasBeenSet() const;

                private:

                    /**
                     * <p>预热类型，枚举值 LoadByPath｜LoadByList</p>
                     */
                    std::string m_loadType;
                    bool m_loadTypeHasBeenSet;

                    /**
                     * <p>是否跳过相同文件，默认为 true</p>
                     */
                    bool m_skipIfExists;
                    bool m_skipIfExistsHasBeenSet;

                    /**
                     * <p>预热路径，入参单条挂载路径。入参数LoadType为LoadByPath，该参数不应为空</p>
                     */
                    std::string m_loadByPath;
                    bool m_loadByPathHasBeenSet;

                    /**
                     * <p>通过文件列表批量预热，入参为 cos://bucket-appid/ 开头的 COS 路径，且仅支持 txt 格式文件，长度不能超过255个字符。入参数LoadType为LoadByList，该参数不应为空</p>
                     */
                    std::string m_loadByList;
                    bool m_loadByListHasBeenSet;

                    /**
                     * <p>副本数配置，枚举值，可选值 SingleReplica（单副本，默认）｜MaxReplica（最大副本）</p>
                     */
                    std::string m_replica;
                    bool m_replicaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADDATAATTRS_H_
