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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBLOGFILESRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBLOGFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/LogFileInfo.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBLogFiles返回参数结构体
                */
                class DescribeDBLogFilesResponse : public AbstractModel
                {
                public:
                    DescribeDBLogFilesResponse();
                    ~DescribeDBLogFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     * @return Type 请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取请求日志总数
                     * @return Total 请求日志总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取包含uri、length、mtime（修改时间）等信息
                     * @return Files 包含uri、length、mtime（修改时间）等信息
                     * 
                     */
                    std::vector<LogFileInfo> GetFiles() const;

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取如果是VPC网络的实例，做用本前缀加上URI为下载地址
                     * @return VpcPrefix 如果是VPC网络的实例，做用本前缀加上URI为下载地址
                     * 
                     */
                    std::string GetVpcPrefix() const;

                    /**
                     * 判断参数 VpcPrefix 是否已赋值
                     * @return VpcPrefix 是否已赋值
                     * 
                     */
                    bool VpcPrefixHasBeenSet() const;

                    /**
                     * 获取如果是普通网络的实例，做用本前缀加上URI为下载地址
                     * @return NormalPrefix 如果是普通网络的实例，做用本前缀加上URI为下载地址
                     * 
                     */
                    std::string GetNormalPrefix() const;

                    /**
                     * 判断参数 NormalPrefix 是否已赋值
                     * @return NormalPrefix 是否已赋值
                     * 
                     */
                    bool NormalPrefixHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 请求日志总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 包含uri、length、mtime（修改时间）等信息
                     */
                    std::vector<LogFileInfo> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * 如果是VPC网络的实例，做用本前缀加上URI为下载地址
                     */
                    std::string m_vpcPrefix;
                    bool m_vpcPrefixHasBeenSet;

                    /**
                     * 如果是普通网络的实例，做用本前缀加上URI为下载地址
                     */
                    std::string m_normalPrefix;
                    bool m_normalPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBLOGFILESRESPONSE_H_
