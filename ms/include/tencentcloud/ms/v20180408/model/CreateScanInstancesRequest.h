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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATESCANINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATESCANINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AppInfo.h>
#include <tencentcloud/ms/v20180408/model/ScanInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateScanInstances请求参数结构体
                */
                class CreateScanInstancesRequest : public AbstractModel
                {
                public:
                    CreateScanInstancesRequest();
                    ~CreateScanInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待扫描的app信息列表，一次最多提交20个
                     * @return AppInfos 待扫描的app信息列表，一次最多提交20个
                     */
                    std::vector<AppInfo> GetAppInfos() const;

                    /**
                     * 设置待扫描的app信息列表，一次最多提交20个
                     * @param AppInfos 待扫描的app信息列表，一次最多提交20个
                     */
                    void SetAppInfos(const std::vector<AppInfo>& _appInfos);

                    /**
                     * 判断参数 AppInfos 是否已赋值
                     * @return AppInfos 是否已赋值
                     */
                    bool AppInfosHasBeenSet() const;

                    /**
                     * 获取扫描信息
                     * @return ScanInfo 扫描信息
                     */
                    ScanInfo GetScanInfo() const;

                    /**
                     * 设置扫描信息
                     * @param ScanInfo 扫描信息
                     */
                    void SetScanInfo(const ScanInfo& _scanInfo);

                    /**
                     * 判断参数 ScanInfo 是否已赋值
                     * @return ScanInfo 是否已赋值
                     */
                    bool ScanInfoHasBeenSet() const;

                private:

                    /**
                     * 待扫描的app信息列表，一次最多提交20个
                     */
                    std::vector<AppInfo> m_appInfos;
                    bool m_appInfosHasBeenSet;

                    /**
                     * 扫描信息
                     */
                    ScanInfo m_scanInfo;
                    bool m_scanInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATESCANINSTANCESREQUEST_H_
