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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPUSERRULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPUSERRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPFileSizeRange.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPURLRuleItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPTrafficRuleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DLP 用户规则结构化视图，按「检测规则」5 个检测维度返回，便于前端按维度渲染。只读输出字段，不影响 Create/Modify 入参
                */
                class TrafficSandboxDLPUserRuleInfo : public AbstractModel
                {
                public:
                    TrafficSandboxDLPUserRuleInfo();
                    ~TrafficSandboxDLPUserRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称匹配维度：汇总去重后的文件名/正则列表
                     * @return FileName 文件名称匹配维度：汇总去重后的文件名/正则列表
                     * 
                     */
                    std::vector<std::string> GetFileName() const;

                    /**
                     * 设置文件名称匹配维度：汇总去重后的文件名/正则列表
                     * @param _fileName 文件名称匹配维度：汇总去重后的文件名/正则列表
                     * 
                     */
                    void SetFileName(const std::vector<std::string>& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件大小限制维度（区间）
                     * @return FileSize 文件大小限制维度（区间）
                     * 
                     */
                    TrafficSandboxDLPFileSizeRange GetFileSize() const;

                    /**
                     * 设置文件大小限制维度（区间）
                     * @param _fileSize 文件大小限制维度（区间）
                     * 
                     */
                    void SetFileSize(const TrafficSandboxDLPFileSizeRange& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件格式限制维度：汇总去重后的格式/类目列表
                     * @return FileType 文件格式限制维度：汇总去重后的格式/类目列表
                     * 
                     */
                    std::vector<std::string> GetFileType() const;

                    /**
                     * 设置文件格式限制维度：汇总去重后的格式/类目列表
                     * @param _fileType 文件格式限制维度：汇总去重后的格式/类目列表
                     * 
                     */
                    void SetFileType(const std::vector<std::string>& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取外发域名检测维度（单值对象）
                     * @return URLRule 外发域名检测维度（单值对象）
                     * 
                     */
                    TrafficSandboxDLPURLRuleItem GetURLRule() const;

                    /**
                     * 设置外发域名检测维度（单值对象）
                     * @param _uRLRule 外发域名检测维度（单值对象）
                     * 
                     */
                    void SetURLRule(const TrafficSandboxDLPURLRuleItem& _uRLRule);

                    /**
                     * 判断参数 URLRule 是否已赋值
                     * @return URLRule 是否已赋值
                     * 
                     */
                    bool URLRuleHasBeenSet() const;

                    /**
                     * 获取外发内容检测维度（可多行，名称 + 正则）
                     * @return TrafficRule 外发内容检测维度（可多行，名称 + 正则）
                     * 
                     */
                    std::vector<TrafficSandboxDLPTrafficRuleItem> GetTrafficRule() const;

                    /**
                     * 设置外发内容检测维度（可多行，名称 + 正则）
                     * @param _trafficRule 外发内容检测维度（可多行，名称 + 正则）
                     * 
                     */
                    void SetTrafficRule(const std::vector<TrafficSandboxDLPTrafficRuleItem>& _trafficRule);

                    /**
                     * 判断参数 TrafficRule 是否已赋值
                     * @return TrafficRule 是否已赋值
                     * 
                     */
                    bool TrafficRuleHasBeenSet() const;

                private:

                    /**
                     * 文件名称匹配维度：汇总去重后的文件名/正则列表
                     */
                    std::vector<std::string> m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小限制维度（区间）
                     */
                    TrafficSandboxDLPFileSizeRange m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件格式限制维度：汇总去重后的格式/类目列表
                     */
                    std::vector<std::string> m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 外发域名检测维度（单值对象）
                     */
                    TrafficSandboxDLPURLRuleItem m_uRLRule;
                    bool m_uRLRuleHasBeenSet;

                    /**
                     * 外发内容检测维度（可多行，名称 + 正则）
                     */
                    std::vector<TrafficSandboxDLPTrafficRuleItem> m_trafficRule;
                    bool m_trafficRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPUSERRULEINFO_H_
