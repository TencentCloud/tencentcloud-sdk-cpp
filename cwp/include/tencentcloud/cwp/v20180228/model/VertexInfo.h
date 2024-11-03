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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXINFO_H_

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
                * 攻击溯源节点信息
                */
                class VertexInfo : public AbstractModel
                {
                public:
                    VertexInfo();
                    ~VertexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该结点类型，进程:1；网络:2；文件:3；ssh:4；
                     * @return Type 该结点类型，进程:1；网络:2；文件:3；ssh:4；
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置该结点类型，进程:1；网络:2；文件:3；ssh:4；
                     * @param _type 该结点类型，进程:1；网络:2；文件:3；ssh:4；
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取该节点包含的vid
                     * @return Vid 该节点包含的vid
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置该节点包含的vid
                     * @param _vid 该节点包含的vid
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取该节点的父节点vid
                     * @return ParentVid 该节点的父节点vid
                     * 
                     */
                    std::string GetParentVid() const;

                    /**
                     * 设置该节点的父节点vid
                     * @param _parentVid 该节点的父节点vid
                     * 
                     */
                    void SetParentVid(const std::string& _parentVid);

                    /**
                     * 判断参数 ParentVid 是否已赋值
                     * @return ParentVid 是否已赋值
                     * 
                     */
                    bool ParentVidHasBeenSet() const;

                    /**
                     * 获取是否叶子
                     * @return IsLeaf 是否叶子
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否叶子
                     * @param _isLeaf 是否叶子
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取进程名，当Type=1时使用
                     * @return ProcNamePrefix 进程名，当Type=1时使用
                     * 
                     */
                    std::string GetProcNamePrefix() const;

                    /**
                     * 设置进程名，当Type=1时使用
                     * @param _procNamePrefix 进程名，当Type=1时使用
                     * 
                     */
                    void SetProcNamePrefix(const std::string& _procNamePrefix);

                    /**
                     * 判断参数 ProcNamePrefix 是否已赋值
                     * @return ProcNamePrefix 是否已赋值
                     * 
                     */
                    bool ProcNamePrefixHasBeenSet() const;

                    /**
                     * 获取进程名md5，当Type=1时使用
                     * @return ProcNameMd5 进程名md5，当Type=1时使用
                     * 
                     */
                    std::string GetProcNameMd5() const;

                    /**
                     * 设置进程名md5，当Type=1时使用
                     * @param _procNameMd5 进程名md5，当Type=1时使用
                     * 
                     */
                    void SetProcNameMd5(const std::string& _procNameMd5);

                    /**
                     * 判断参数 ProcNameMd5 是否已赋值
                     * @return ProcNameMd5 是否已赋值
                     * 
                     */
                    bool ProcNameMd5HasBeenSet() const;

                    /**
                     * 获取命令行，当Type=1时使用
                     * @return CmdLinePrefix 命令行，当Type=1时使用
                     * 
                     */
                    std::string GetCmdLinePrefix() const;

                    /**
                     * 设置命令行，当Type=1时使用
                     * @param _cmdLinePrefix 命令行，当Type=1时使用
                     * 
                     */
                    void SetCmdLinePrefix(const std::string& _cmdLinePrefix);

                    /**
                     * 判断参数 CmdLinePrefix 是否已赋值
                     * @return CmdLinePrefix 是否已赋值
                     * 
                     */
                    bool CmdLinePrefixHasBeenSet() const;

                    /**
                     * 获取命令行md5，当Type=1时使用
                     * @return CmdLineMd5 命令行md5，当Type=1时使用
                     * 
                     */
                    std::string GetCmdLineMd5() const;

                    /**
                     * 设置命令行md5，当Type=1时使用
                     * @param _cmdLineMd5 命令行md5，当Type=1时使用
                     * 
                     */
                    void SetCmdLineMd5(const std::string& _cmdLineMd5);

                    /**
                     * 判断参数 CmdLineMd5 是否已赋值
                     * @return CmdLineMd5 是否已赋值
                     * 
                     */
                    bool CmdLineMd5HasBeenSet() const;

                    /**
                     * 获取文件路径，当Type=3时使用
                     * @return FilePathPrefix 文件路径，当Type=3时使用
                     * 
                     */
                    std::string GetFilePathPrefix() const;

                    /**
                     * 设置文件路径，当Type=3时使用
                     * @param _filePathPrefix 文件路径，当Type=3时使用
                     * 
                     */
                    void SetFilePathPrefix(const std::string& _filePathPrefix);

                    /**
                     * 判断参数 FilePathPrefix 是否已赋值
                     * @return FilePathPrefix 是否已赋值
                     * 
                     */
                    bool FilePathPrefixHasBeenSet() const;

                    /**
                     * 获取请求目的地址，当Type=2时使用
                     * @return AddressPrefix 请求目的地址，当Type=2时使用
                     * 
                     */
                    std::string GetAddressPrefix() const;

                    /**
                     * 设置请求目的地址，当Type=2时使用
                     * @param _addressPrefix 请求目的地址，当Type=2时使用
                     * 
                     */
                    void SetAddressPrefix(const std::string& _addressPrefix);

                    /**
                     * 判断参数 AddressPrefix 是否已赋值
                     * @return AddressPrefix 是否已赋值
                     * 
                     */
                    bool AddressPrefixHasBeenSet() const;

                    /**
                     * 获取是否漏洞节点
                     * @return IsWeDetect 是否漏洞节点
                     * 
                     */
                    bool GetIsWeDetect() const;

                    /**
                     * 设置是否漏洞节点
                     * @param _isWeDetect 是否漏洞节点
                     * 
                     */
                    void SetIsWeDetect(const bool& _isWeDetect);

                    /**
                     * 判断参数 IsWeDetect 是否已赋值
                     * @return IsWeDetect 是否已赋值
                     * 
                     */
                    bool IsWeDetectHasBeenSet() const;

                    /**
                     * 获取是否告警节点
                     * @return IsAlarm 是否告警节点
                     * 
                     */
                    bool GetIsAlarm() const;

                    /**
                     * 设置是否告警节点
                     * @param _isAlarm 是否告警节点
                     * 
                     */
                    void SetIsAlarm(const bool& _isAlarm);

                    /**
                     * 判断参数 IsAlarm 是否已赋值
                     * @return IsAlarm 是否已赋值
                     * 
                     */
                    bool IsAlarmHasBeenSet() const;

                    /**
                     * 获取文件路径md5，当Type=3时使用
                     * @return FilePathMd5 文件路径md5，当Type=3时使用
                     * 
                     */
                    std::string GetFilePathMd5() const;

                    /**
                     * 设置文件路径md5，当Type=3时使用
                     * @param _filePathMd5 文件路径md5，当Type=3时使用
                     * 
                     */
                    void SetFilePathMd5(const std::string& _filePathMd5);

                    /**
                     * 判断参数 FilePathMd5 是否已赋值
                     * @return FilePathMd5 是否已赋值
                     * 
                     */
                    bool FilePathMd5HasBeenSet() const;

                    /**
                     * 获取请求目的地址md5，当Type=2时使用
                     * @return AddressMd5 请求目的地址md5，当Type=2时使用
                     * 
                     */
                    std::string GetAddressMd5() const;

                    /**
                     * 设置请求目的地址md5，当Type=2时使用
                     * @param _addressMd5 请求目的地址md5，当Type=2时使用
                     * 
                     */
                    void SetAddressMd5(const std::string& _addressMd5);

                    /**
                     * 判断参数 AddressMd5 是否已赋值
                     * @return AddressMd5 是否已赋值
                     * 
                     */
                    bool AddressMd5HasBeenSet() const;

                private:

                    /**
                     * 该结点类型，进程:1；网络:2；文件:3；ssh:4；
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 该节点包含的vid
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * 该节点的父节点vid
                     */
                    std::string m_parentVid;
                    bool m_parentVidHasBeenSet;

                    /**
                     * 是否叶子
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 进程名，当Type=1时使用
                     */
                    std::string m_procNamePrefix;
                    bool m_procNamePrefixHasBeenSet;

                    /**
                     * 进程名md5，当Type=1时使用
                     */
                    std::string m_procNameMd5;
                    bool m_procNameMd5HasBeenSet;

                    /**
                     * 命令行，当Type=1时使用
                     */
                    std::string m_cmdLinePrefix;
                    bool m_cmdLinePrefixHasBeenSet;

                    /**
                     * 命令行md5，当Type=1时使用
                     */
                    std::string m_cmdLineMd5;
                    bool m_cmdLineMd5HasBeenSet;

                    /**
                     * 文件路径，当Type=3时使用
                     */
                    std::string m_filePathPrefix;
                    bool m_filePathPrefixHasBeenSet;

                    /**
                     * 请求目的地址，当Type=2时使用
                     */
                    std::string m_addressPrefix;
                    bool m_addressPrefixHasBeenSet;

                    /**
                     * 是否漏洞节点
                     */
                    bool m_isWeDetect;
                    bool m_isWeDetectHasBeenSet;

                    /**
                     * 是否告警节点
                     */
                    bool m_isAlarm;
                    bool m_isAlarmHasBeenSet;

                    /**
                     * 文件路径md5，当Type=3时使用
                     */
                    std::string m_filePathMd5;
                    bool m_filePathMd5HasBeenSet;

                    /**
                     * 请求目的地址md5，当Type=2时使用
                     */
                    std::string m_addressMd5;
                    bool m_addressMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXINFO_H_
