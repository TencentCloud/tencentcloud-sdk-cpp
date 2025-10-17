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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTTASKREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * CreateDLPFileDetectTask请求参数结构体
                */
                class CreateDLPFileDetectTaskRequest : public AbstractModel
                {
                public:
                    CreateDLPFileDetectTaskRequest();
                    ~CreateDLPFileDetectTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件下载Url
                     * @return DownloadUrl 文件下载Url
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置文件下载Url
                     * @param _downloadUrl 文件下载Url
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件Md5
                     * @return FileMd5 文件Md5
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件Md5
                     * @param _fileMd5 文件Md5
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取负载类型  1 从GroupId中选一节点 鉴定  2使用所有SelectNodeIds节点鉴定
                     * @return BalanceType 负载类型  1 从GroupId中选一节点 鉴定  2使用所有SelectNodeIds节点鉴定
                     * 
                     */
                    int64_t GetBalanceType() const;

                    /**
                     * 设置负载类型  1 从GroupId中选一节点 鉴定  2使用所有SelectNodeIds节点鉴定
                     * @param _balanceType 负载类型  1 从GroupId中选一节点 鉴定  2使用所有SelectNodeIds节点鉴定
                     * 
                     */
                    void SetBalanceType(const int64_t& _balanceType);

                    /**
                     * 判断参数 BalanceType 是否已赋值
                     * @return BalanceType 是否已赋值
                     * 
                     */
                    bool BalanceTypeHasBeenSet() const;

                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                    /**
                     * 获取选中节点唯一Id列表,BalanceType=2时必填
                     * @return SelectNodeIds 选中节点唯一Id列表,BalanceType=2时必填
                     * 
                     */
                    std::vector<std::string> GetSelectNodeIds() const;

                    /**
                     * 设置选中节点唯一Id列表,BalanceType=2时必填
                     * @param _selectNodeIds 选中节点唯一Id列表,BalanceType=2时必填
                     * 
                     */
                    void SetSelectNodeIds(const std::vector<std::string>& _selectNodeIds);

                    /**
                     * 判断参数 SelectNodeIds 是否已赋值
                     * @return SelectNodeIds 是否已赋值
                     * 
                     */
                    bool SelectNodeIdsHasBeenSet() const;

                    /**
                     * 获取节点组唯一Id,BalanceType=1时必填
                     * @return GroupId 节点组唯一Id,BalanceType=1时必填
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置节点组唯一Id,BalanceType=1时必填
                     * @param _groupId 节点组唯一Id,BalanceType=1时必填
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 文件下载Url
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件Md5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 负载类型  1 从GroupId中选一节点 鉴定  2使用所有SelectNodeIds节点鉴定
                     */
                    int64_t m_balanceType;
                    bool m_balanceTypeHasBeenSet;

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 选中节点唯一Id列表,BalanceType=2时必填
                     */
                    std::vector<std::string> m_selectNodeIds;
                    bool m_selectNodeIdsHasBeenSet;

                    /**
                     * 节点组唯一Id,BalanceType=1时必填
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTTASKREQUEST_H_
