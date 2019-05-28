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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 预执行脚本配置
                */
                class PreExecuteFileSettings : public AbstractModel
                {
                public:
                    PreExecuteFileSettings();
                    ~PreExecuteFileSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本在COS上路径
                     * @return Path 脚本在COS上路径
                     */
                    std::string GetPath() const;

                    /**
                     * 设置脚本在COS上路径
                     * @param Path 脚本在COS上路径
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取执行脚本参数
                     * @return Args 执行脚本参数
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置执行脚本参数
                     * @param Args 执行脚本参数
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取COS的Bucket名称
                     * @return Bucket COS的Bucket名称
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS的Bucket名称
                     * @param Bucket COS的Bucket名称
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS的Region名称
                     * @return Region COS的Region名称
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS的Region名称
                     * @param Region COS的Region名称
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取COS的Domain数据
                     * @return Domain COS的Domain数据
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置COS的Domain数据
                     * @param Domain COS的Domain数据
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 脚本在COS上路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 执行脚本参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * COS的Bucket名称
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS的Region名称
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * COS的Domain数据
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_
