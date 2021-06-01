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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 日志上下文信息
                */
                class LogContextInfo : public AbstractModel
                {
                public:
                    LogContextInfo();
                    ~LogContextInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志来源设备
                     * @return Source 日志来源设备
                     */
                    std::string GetSource() const;

                    /**
                     * 设置日志来源设备
                     * @param Source 日志来源设备
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取采集路径
                     * @return Filename 采集路径
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置采集路径
                     * @param Filename 采集路径
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取日志内容
                     * @return Content 日志内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置日志内容
                     * @param Content 日志内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取日志包序号
                     * @return PkgId 日志包序号
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志包序号
                     * @param PkgId 日志包序号
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取日志包内一条日志的序号
                     * @return PkgLogId 日志包内一条日志的序号
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置日志包内一条日志的序号
                     * @param PkgLogId 日志包内一条日志的序号
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取日志时间戳
                     * @return BTime 日志时间戳
                     */
                    int64_t GetBTime() const;

                    /**
                     * 设置日志时间戳
                     * @param BTime 日志时间戳
                     */
                    void SetBTime(const int64_t& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     */
                    bool BTimeHasBeenSet() const;

                private:

                    /**
                     * 日志来源设备
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 采集路径
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 日志包序号
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志包内一条日志的序号
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 日志时间戳
                     */
                    int64_t m_bTime;
                    bool m_bTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_
