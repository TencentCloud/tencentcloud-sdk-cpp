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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATENETINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 更新设备网络状态信息
                */
                class UpdateNetInfo : public AbstractModel
                {
                public:
                    UpdateNetInfo();
                    ~UpdateNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络类型：
0:数据
1:Wi-Fi
                     * @return Type 网络类型：
0:数据
1:Wi-Fi
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置网络类型：
0:数据
1:Wi-Fi
                     * @param _type 网络类型：
0:数据
1:Wi-Fi
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
                     * 获取启用/禁用
                     * @return DataEnable 启用/禁用
                     * 
                     */
                    bool GetDataEnable() const;

                    /**
                     * 设置启用/禁用
                     * @param _dataEnable 启用/禁用
                     * 
                     */
                    void SetDataEnable(const bool& _dataEnable);

                    /**
                     * 判断参数 DataEnable 是否已赋值
                     * @return DataEnable 是否已赋值
                     * 
                     */
                    bool DataEnableHasBeenSet() const;

                    /**
                     * 获取上行限速：bit
                     * @return UploadLimit 上行限速：bit
                     * 
                     */
                    uint64_t GetUploadLimit() const;

                    /**
                     * 设置上行限速：bit
                     * @param _uploadLimit 上行限速：bit
                     * 
                     */
                    void SetUploadLimit(const uint64_t& _uploadLimit);

                    /**
                     * 判断参数 UploadLimit 是否已赋值
                     * @return UploadLimit 是否已赋值
                     * 
                     */
                    bool UploadLimitHasBeenSet() const;

                    /**
                     * 获取下行限速：bit
                     * @return DownloadLimit 下行限速：bit
                     * 
                     */
                    uint64_t GetDownloadLimit() const;

                    /**
                     * 设置下行限速：bit
                     * @param _downloadLimit 下行限速：bit
                     * 
                     */
                    void SetDownloadLimit(const uint64_t& _downloadLimit);

                    /**
                     * 判断参数 DownloadLimit 是否已赋值
                     * @return DownloadLimit 是否已赋值
                     * 
                     */
                    bool DownloadLimitHasBeenSet() const;

                    /**
                     * 获取网卡名
                     * @return NetInfoName 网卡名
                     * 
                     */
                    std::string GetNetInfoName() const;

                    /**
                     * 设置网卡名
                     * @param _netInfoName 网卡名
                     * 
                     */
                    void SetNetInfoName(const std::string& _netInfoName);

                    /**
                     * 判断参数 NetInfoName 是否已赋值
                     * @return NetInfoName 是否已赋值
                     * 
                     */
                    bool NetInfoNameHasBeenSet() const;

                private:

                    /**
                     * 网络类型：
0:数据
1:Wi-Fi
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 启用/禁用
                     */
                    bool m_dataEnable;
                    bool m_dataEnableHasBeenSet;

                    /**
                     * 上行限速：bit
                     */
                    uint64_t m_uploadLimit;
                    bool m_uploadLimitHasBeenSet;

                    /**
                     * 下行限速：bit
                     */
                    uint64_t m_downloadLimit;
                    bool m_downloadLimitHasBeenSet;

                    /**
                     * 网卡名
                     */
                    std::string m_netInfoName;
                    bool m_netInfoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATENETINFO_H_
