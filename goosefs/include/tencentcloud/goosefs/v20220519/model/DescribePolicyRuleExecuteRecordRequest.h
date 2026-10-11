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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEPOLICYRULEEXECUTERECORDREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEPOLICYRULEEXECUTERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribePolicyRuleExecuteRecord请求参数结构体
                */
                class DescribePolicyRuleExecuteRecordRequest : public AbstractModel
                {
                public:
                    DescribePolicyRuleExecuteRecordRequest();
                    ~DescribePolicyRuleExecuteRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统ID</p>
                     * @return FileSystemId <p>文件系统ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统ID</p>
                     * @param _fileSystemId <p>文件系统ID</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>最大返回数量</p>
                     * @return Limit <p>最大返回数量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>最大返回数量</p>
                     * @param _limit <p>最大返回数量</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>规则id</p>
                     * @return RuleId <p>规则id</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则id</p>
                     * @param _ruleId <p>规则id</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>最大返回数量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>规则id</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEPOLICYRULEEXECUTERECORDREQUEST_H_
