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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防护目录列表集
                */
                class ProtectDirInfo : public AbstractModel
                {
                public:
                    ProtectDirInfo();
                    ~ProtectDirInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网站名称
                     * @return DirName 网站名称
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置网站名称
                     * @param DirName 网站名称
                     */
                    void SetDirName(const std::string& _dirName);

                    /**
                     * 判断参数 DirName 是否已赋值
                     * @return DirName 是否已赋值
                     */
                    bool DirNameHasBeenSet() const;

                    /**
                     * 获取网站防护目录地址
                     * @return DirPath 网站防护目录地址
                     */
                    std::string GetDirPath() const;

                    /**
                     * 设置网站防护目录地址
                     * @param DirPath 网站防护目录地址
                     */
                    void SetDirPath(const std::string& _dirPath);

                    /**
                     * 判断参数 DirPath 是否已赋值
                     * @return DirPath 是否已赋值
                     */
                    bool DirPathHasBeenSet() const;

                    /**
                     * 获取关联服务器数
                     * @return RelatedServerNum 关联服务器数
                     */
                    uint64_t GetRelatedServerNum() const;

                    /**
                     * 设置关联服务器数
                     * @param RelatedServerNum 关联服务器数
                     */
                    void SetRelatedServerNum(const uint64_t& _relatedServerNum);

                    /**
                     * 判断参数 RelatedServerNum 是否已赋值
                     * @return RelatedServerNum 是否已赋值
                     */
                    bool RelatedServerNumHasBeenSet() const;

                    /**
                     * 获取防护服务器数
                     * @return ProtectServerNum 防护服务器数
                     */
                    uint64_t GetProtectServerNum() const;

                    /**
                     * 设置防护服务器数
                     * @param ProtectServerNum 防护服务器数
                     */
                    void SetProtectServerNum(const uint64_t& _protectServerNum);

                    /**
                     * 判断参数 ProtectServerNum 是否已赋值
                     * @return ProtectServerNum 是否已赋值
                     */
                    bool ProtectServerNumHasBeenSet() const;

                    /**
                     * 获取未防护服务器数
                     * @return NoProtectServerNum 未防护服务器数
                     */
                    uint64_t GetNoProtectServerNum() const;

                    /**
                     * 设置未防护服务器数
                     * @param NoProtectServerNum 未防护服务器数
                     */
                    void SetNoProtectServerNum(const uint64_t& _noProtectServerNum);

                    /**
                     * 判断参数 NoProtectServerNum 是否已赋值
                     * @return NoProtectServerNum 是否已赋值
                     */
                    bool NoProtectServerNumHasBeenSet() const;

                    /**
                     * 获取唯一ID
                     * @return Id 唯一ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置唯一ID
                     * @param Id 唯一ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取防护状态
                     * @return ProtectStatus 防护状态
                     */
                    uint64_t GetProtectStatus() const;

                    /**
                     * 设置防护状态
                     * @param ProtectStatus 防护状态
                     */
                    void SetProtectStatus(const uint64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取防护异常
                     * @return ProtectException 防护异常
                     */
                    uint64_t GetProtectException() const;

                    /**
                     * 设置防护异常
                     * @param ProtectException 防护异常
                     */
                    void SetProtectException(const uint64_t& _protectException);

                    /**
                     * 判断参数 ProtectException 是否已赋值
                     * @return ProtectException 是否已赋值
                     */
                    bool ProtectExceptionHasBeenSet() const;

                    /**
                     * 获取自动恢复开关 (Filters 过滤Quuid 时 返回) 默认0
                     * @return AutoRestoreSwitchStatus 自动恢复开关 (Filters 过滤Quuid 时 返回) 默认0
                     */
                    uint64_t GetAutoRestoreSwitchStatus() const;

                    /**
                     * 设置自动恢复开关 (Filters 过滤Quuid 时 返回) 默认0
                     * @param AutoRestoreSwitchStatus 自动恢复开关 (Filters 过滤Quuid 时 返回) 默认0
                     */
                    void SetAutoRestoreSwitchStatus(const uint64_t& _autoRestoreSwitchStatus);

                    /**
                     * 判断参数 AutoRestoreSwitchStatus 是否已赋值
                     * @return AutoRestoreSwitchStatus 是否已赋值
                     */
                    bool AutoRestoreSwitchStatusHasBeenSet() const;

                private:

                    /**
                     * 网站名称
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * 网站防护目录地址
                     */
                    std::string m_dirPath;
                    bool m_dirPathHasBeenSet;

                    /**
                     * 关联服务器数
                     */
                    uint64_t m_relatedServerNum;
                    bool m_relatedServerNumHasBeenSet;

                    /**
                     * 防护服务器数
                     */
                    uint64_t m_protectServerNum;
                    bool m_protectServerNumHasBeenSet;

                    /**
                     * 未防护服务器数
                     */
                    uint64_t m_noProtectServerNum;
                    bool m_noProtectServerNumHasBeenSet;

                    /**
                     * 唯一ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 防护状态
                     */
                    uint64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * 防护异常
                     */
                    uint64_t m_protectException;
                    bool m_protectExceptionHasBeenSet;

                    /**
                     * 自动恢复开关 (Filters 过滤Quuid 时 返回) 默认0
                     */
                    uint64_t m_autoRestoreSwitchStatus;
                    bool m_autoRestoreSwitchStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRINFO_H_
