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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOMAPRULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOMAPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 高级映射，自动映射规则
                */
                class AutoMapRule : public AbstractModel
                {
                public:
                    AutoMapRule();
                    ~AutoMapRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端实例Id
                     * @return SrcInstanceId 源端实例Id
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源端实例Id
                     * @param _srcInstanceId 源端实例Id
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取源端数据库正则
                     * @return SrcDatabaseRegex 源端数据库正则
                     * 
                     */
                    std::string GetSrcDatabaseRegex() const;

                    /**
                     * 设置源端数据库正则
                     * @param _srcDatabaseRegex 源端数据库正则
                     * 
                     */
                    void SetSrcDatabaseRegex(const std::string& _srcDatabaseRegex);

                    /**
                     * 判断参数 SrcDatabaseRegex 是否已赋值
                     * @return SrcDatabaseRegex 是否已赋值
                     * 
                     */
                    bool SrcDatabaseRegexHasBeenSet() const;

                    /**
                     * 获取源端表正则
                     * @return SrcTableRegex 源端表正则
                     * 
                     */
                    std::string GetSrcTableRegex() const;

                    /**
                     * 设置源端表正则
                     * @param _srcTableRegex 源端表正则
                     * 
                     */
                    void SetSrcTableRegex(const std::string& _srcTableRegex);

                    /**
                     * 判断参数 SrcTableRegex 是否已赋值
                     * @return SrcTableRegex 是否已赋值
                     * 
                     */
                    bool SrcTableRegexHasBeenSet() const;

                    /**
                     * 获取目标端数据库正则
                     * @return DstDatabaseRegex 目标端数据库正则
                     * 
                     */
                    std::string GetDstDatabaseRegex() const;

                    /**
                     * 设置目标端数据库正则
                     * @param _dstDatabaseRegex 目标端数据库正则
                     * 
                     */
                    void SetDstDatabaseRegex(const std::string& _dstDatabaseRegex);

                    /**
                     * 判断参数 DstDatabaseRegex 是否已赋值
                     * @return DstDatabaseRegex 是否已赋值
                     * 
                     */
                    bool DstDatabaseRegexHasBeenSet() const;

                    /**
                     * 获取目标端表正则
                     * @return DstTableRegex 目标端表正则
                     * 
                     */
                    std::string GetDstTableRegex() const;

                    /**
                     * 设置目标端表正则
                     * @param _dstTableRegex 目标端表正则
                     * 
                     */
                    void SetDstTableRegex(const std::string& _dstTableRegex);

                    /**
                     * 判断参数 DstTableRegex 是否已赋值
                     * @return DstTableRegex 是否已赋值
                     * 
                     */
                    bool DstTableRegexHasBeenSet() const;

                private:

                    /**
                     * 源端实例Id
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 源端数据库正则
                     */
                    std::string m_srcDatabaseRegex;
                    bool m_srcDatabaseRegexHasBeenSet;

                    /**
                     * 源端表正则
                     */
                    std::string m_srcTableRegex;
                    bool m_srcTableRegexHasBeenSet;

                    /**
                     * 目标端数据库正则
                     */
                    std::string m_dstDatabaseRegex;
                    bool m_dstDatabaseRegexHasBeenSet;

                    /**
                     * 目标端表正则
                     */
                    std::string m_dstTableRegex;
                    bool m_dstTableRegexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUTOMAPRULE_H_
