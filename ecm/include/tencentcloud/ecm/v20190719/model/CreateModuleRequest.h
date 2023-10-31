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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/TagSpecification.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateModule请求参数结构体
                */
                class CreateModuleRequest : public AbstractModel
                {
                public:
                    CreateModuleRequest();
                    ~CreateModuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名称，如视频直播模块。限制：模块名称不得以空格开头，长度不得超过60个字符。
                     * @return ModuleName 模块名称，如视频直播模块。限制：模块名称不得以空格开头，长度不得超过60个字符。
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置模块名称，如视频直播模块。限制：模块名称不得以空格开头，长度不得超过60个字符。
                     * @param _moduleName 模块名称，如视频直播模块。限制：模块名称不得以空格开头，长度不得超过60个字符。
                     * 
                     */
                    void SetModuleName(const std::string& _moduleName);

                    /**
                     * 判断参数 ModuleName 是否已赋值
                     * @return ModuleName 是否已赋值
                     * 
                     */
                    bool ModuleNameHasBeenSet() const;

                    /**
                     * 获取默认带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @return DefaultBandWidth 默认带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    int64_t GetDefaultBandWidth() const;

                    /**
                     * 设置默认带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @param _defaultBandWidth 默认带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    void SetDefaultBandWidth(const int64_t& _defaultBandWidth);

                    /**
                     * 判断参数 DefaultBandWidth 是否已赋值
                     * @return DefaultBandWidth 是否已赋值
                     * 
                     */
                    bool DefaultBandWidthHasBeenSet() const;

                    /**
                     * 获取默认镜像。
                     * @return DefaultImageId 默认镜像。
                     * 
                     */
                    std::string GetDefaultImageId() const;

                    /**
                     * 设置默认镜像。
                     * @param _defaultImageId 默认镜像。
                     * 
                     */
                    void SetDefaultImageId(const std::string& _defaultImageId);

                    /**
                     * 判断参数 DefaultImageId 是否已赋值
                     * @return DefaultImageId 是否已赋值
                     * 
                     */
                    bool DefaultImageIdHasBeenSet() const;

                    /**
                     * 获取机型ID。
                     * @return InstanceType 机型ID。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型ID。
                     * @param _instanceType 机型ID。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取默认系统盘大小，单位：GB，默认大小为50GB。范围不得超过系统盘上下限制，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @return DefaultSystemDiskSize 默认系统盘大小，单位：GB，默认大小为50GB。范围不得超过系统盘上下限制，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    int64_t GetDefaultSystemDiskSize() const;

                    /**
                     * 设置默认系统盘大小，单位：GB，默认大小为50GB。范围不得超过系统盘上下限制，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @param _defaultSystemDiskSize 默认系统盘大小，单位：GB，默认大小为50GB。范围不得超过系统盘上下限制，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    void SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize);

                    /**
                     * 判断参数 DefaultSystemDiskSize 是否已赋值
                     * @return DefaultSystemDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取默认数据盘大小，单位：GB。范围不得超过数据盘范围大小，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @return DefaultDataDiskSize 默认数据盘大小，单位：GB。范围不得超过数据盘范围大小，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    int64_t GetDefaultDataDiskSize() const;

                    /**
                     * 设置默认数据盘大小，单位：GB。范围不得超过数据盘范围大小，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @param _defaultDataDiskSize 默认数据盘大小，单位：GB。范围不得超过数据盘范围大小，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    void SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize);

                    /**
                     * 判断参数 DefaultDataDiskSize 是否已赋值
                     * @return DefaultDataDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取是否关闭IP直通。取值范围：
true：表示关闭IP直通
false：表示开通IP直通
                     * @return CloseIpDirect 是否关闭IP直通。取值范围：
true：表示关闭IP直通
false：表示开通IP直通
                     * 
                     */
                    bool GetCloseIpDirect() const;

                    /**
                     * 设置是否关闭IP直通。取值范围：
true：表示关闭IP直通
false：表示开通IP直通
                     * @param _closeIpDirect 是否关闭IP直通。取值范围：
true：表示关闭IP直通
false：表示开通IP直通
                     * 
                     */
                    void SetCloseIpDirect(const bool& _closeIpDirect);

                    /**
                     * 判断参数 CloseIpDirect 是否已赋值
                     * @return CloseIpDirect 是否已赋值
                     * 
                     */
                    bool CloseIpDirectHasBeenSet() const;

                    /**
                     * 获取标签列表。
                     * @return TagSpecification 标签列表。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签列表。
                     * @param _tagSpecification 标签列表。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取模块默认安全组列表
                     * @return SecurityGroups 模块默认安全组列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置模块默认安全组列表
                     * @param _securityGroups 模块默认安全组列表
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取默认入带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @return DefaultBandWidthIn 默认入带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    int64_t GetDefaultBandWidthIn() const;

                    /**
                     * 设置默认入带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * @param _defaultBandWidthIn 默认入带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     * 
                     */
                    void SetDefaultBandWidthIn(const int64_t& _defaultBandWidthIn);

                    /**
                     * 判断参数 DefaultBandWidthIn 是否已赋值
                     * @return DefaultBandWidthIn 是否已赋值
                     * 
                     */
                    bool DefaultBandWidthInHasBeenSet() const;

                    /**
                     * 获取是否禁止分配外网IP
                     * @return DisableWanIp 是否禁止分配外网IP
                     * 
                     */
                    bool GetDisableWanIp() const;

                    /**
                     * 设置是否禁止分配外网IP
                     * @param _disableWanIp 是否禁止分配外网IP
                     * 
                     */
                    void SetDisableWanIp(const bool& _disableWanIp);

                    /**
                     * 判断参数 DisableWanIp 是否已赋值
                     * @return DisableWanIp 是否已赋值
                     * 
                     */
                    bool DisableWanIpHasBeenSet() const;

                    /**
                     * 获取系统盘信息。
                     * @return SystemDisk 系统盘信息。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置系统盘信息。
                     * @param _systemDisk 系统盘信息。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取数据盘信息。
                     * @return DataDisks 数据盘信息。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置数据盘信息。
                     * @param _dataDisks 数据盘信息。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                private:

                    /**
                     * 模块名称，如视频直播模块。限制：模块名称不得以空格开头，长度不得超过60个字符。
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                    /**
                     * 默认带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     */
                    int64_t m_defaultBandWidth;
                    bool m_defaultBandWidthHasBeenSet;

                    /**
                     * 默认镜像。
                     */
                    std::string m_defaultImageId;
                    bool m_defaultImageIdHasBeenSet;

                    /**
                     * 机型ID。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 默认系统盘大小，单位：GB，默认大小为50GB。范围不得超过系统盘上下限制，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     */
                    int64_t m_defaultSystemDiskSize;
                    bool m_defaultSystemDiskSizeHasBeenSet;

                    /**
                     * 默认数据盘大小，单位：GB。范围不得超过数据盘范围大小，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     */
                    int64_t m_defaultDataDiskSize;
                    bool m_defaultDataDiskSizeHasBeenSet;

                    /**
                     * 是否关闭IP直通。取值范围：
true：表示关闭IP直通
false：表示开通IP直通
                     */
                    bool m_closeIpDirect;
                    bool m_closeIpDirectHasBeenSet;

                    /**
                     * 标签列表。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 模块默认安全组列表
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * 默认入带宽，单位：Mbps。范围不得超过带宽上下限，详看[DescribeConfig](https://cloud.tencent.com/document/product/1108/42572)。
                     */
                    int64_t m_defaultBandWidthIn;
                    bool m_defaultBandWidthInHasBeenSet;

                    /**
                     * 是否禁止分配外网IP
                     */
                    bool m_disableWanIp;
                    bool m_disableWanIpHasBeenSet;

                    /**
                     * 系统盘信息。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 数据盘信息。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULEREQUEST_H_
