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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGAPPCOLLECTPATH_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGAPPCOLLECTPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 应用日志采集路径
                */
                class LogAppCollectPath : public AbstractModel
                {
                public:
                    LogAppCollectPath();
                    ~LogAppCollectPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置ID</p>
                     * @return Id <p>配置ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>配置ID</p>
                     * @param _id <p>配置ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>采集路径</p>
                     * @return Path <p>采集路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>采集路径</p>
                     * @param _path <p>采集路径</p>
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
                     * 获取<p>日志标签</p>
                     * @return LogTag <p>日志标签</p>
                     * 
                     */
                    std::string GetLogTag() const;

                    /**
                     * 设置<p>日志标签</p>
                     * @param _logTag <p>日志标签</p>
                     * 
                     */
                    void SetLogTag(const std::string& _logTag);

                    /**
                     * 判断参数 LogTag 是否已赋值
                     * @return LogTag 是否已赋值
                     * 
                     */
                    bool LogTagHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>配置ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>采集路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>日志标签</p>
                     */
                    std::string m_logTag;
                    bool m_logTagHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGAPPCOLLECTPATH_H_
