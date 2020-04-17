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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 二进制日志信息
                */
                class BinlogInfo : public AbstractModel
                {
                public:
                    BinlogInfo();
                    ~BinlogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取binlog 日志备份文件名
                     * @return Name binlog 日志备份文件名
                     */
                    std::string GetName() const;

                    /**
                     * 设置binlog 日志备份文件名
                     * @param Name binlog 日志备份文件名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位：Byte
                     * @return Size 备份文件大小，单位：Byte
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置备份文件大小，单位：Byte
                     * @param Size 备份文件大小，单位：Byte
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取文件存储时间，时间格式：2016-03-17 02:10:37
                     * @return Date 文件存储时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string GetDate() const;

                    /**
                     * 设置文件存储时间，时间格式：2016-03-17 02:10:37
                     * @param Date 文件存储时间，时间格式：2016-03-17 02:10:37
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取内网下载地址
                     * @return IntranetUrl 内网下载地址
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置内网下载地址
                     * @param IntranetUrl 内网下载地址
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取外网下载地址
                     * @return InternetUrl 外网下载地址
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置外网下载地址
                     * @param InternetUrl 外网下载地址
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取日志具体类型，可能的值有：binlog - 二进制日志
                     * @return Type 日志具体类型，可能的值有：binlog - 二进制日志
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志具体类型，可能的值有：binlog - 二进制日志
                     * @param Type 日志具体类型，可能的值有：binlog - 二进制日志
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取binlog 文件起始时间
                     * @return BinlogStartTime binlog 文件起始时间
                     */
                    std::string GetBinlogStartTime() const;

                    /**
                     * 设置binlog 文件起始时间
                     * @param BinlogStartTime binlog 文件起始时间
                     */
                    void SetBinlogStartTime(const std::string& _binlogStartTime);

                    /**
                     * 判断参数 BinlogStartTime 是否已赋值
                     * @return BinlogStartTime 是否已赋值
                     */
                    bool BinlogStartTimeHasBeenSet() const;

                    /**
                     * 获取binlog 文件截止时间
                     * @return BinlogFinishTime binlog 文件截止时间
                     */
                    std::string GetBinlogFinishTime() const;

                    /**
                     * 设置binlog 文件截止时间
                     * @param BinlogFinishTime binlog 文件截止时间
                     */
                    void SetBinlogFinishTime(const std::string& _binlogFinishTime);

                    /**
                     * 判断参数 BinlogFinishTime 是否已赋值
                     * @return BinlogFinishTime 是否已赋值
                     */
                    bool BinlogFinishTimeHasBeenSet() const;

                private:

                    /**
                     * binlog 日志备份文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备份文件大小，单位：Byte
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件存储时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 内网下载地址
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * 外网下载地址
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * 日志具体类型，可能的值有：binlog - 二进制日志
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * binlog 文件起始时间
                     */
                    std::string m_binlogStartTime;
                    bool m_binlogStartTimeHasBeenSet;

                    /**
                     * binlog 文件截止时间
                     */
                    std::string m_binlogFinishTime;
                    bool m_binlogFinishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
