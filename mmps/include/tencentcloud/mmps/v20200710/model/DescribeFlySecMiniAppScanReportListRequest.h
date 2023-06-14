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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANREPORTLISTREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANREPORTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * DescribeFlySecMiniAppScanReportList请求参数结构体
                */
                class DescribeFlySecMiniAppScanReportListRequest : public AbstractModel
                {
                public:
                    DescribeFlySecMiniAppScanReportListRequest();
                    ~DescribeFlySecMiniAppScanReportListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取小程序AppID
                     * @return MiniAppID 小程序AppID
                     * 
                     */
                    std::string GetMiniAppID() const;

                    /**
                     * 设置小程序AppID
                     * @param _miniAppID 小程序AppID
                     * 
                     */
                    void SetMiniAppID(const std::string& _miniAppID);

                    /**
                     * 判断参数 MiniAppID 是否已赋值
                     * @return MiniAppID 是否已赋值
                     * 
                     */
                    bool MiniAppIDHasBeenSet() const;

                    /**
                     * 获取诊断方式 1:基础诊断，2:深度诊断
                     * @return Mode 诊断方式 1:基础诊断，2:深度诊断
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置诊断方式 1:基础诊断，2:深度诊断
                     * @param _mode 诊断方式 1:基础诊断，2:深度诊断
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取诊断状态 -1:查询全部, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * @return Status 诊断状态 -1:查询全部, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置诊断状态 -1:查询全部, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * @param _status 诊断状态 -1:查询全部, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取查询数量, 0:查询所有, 其他值:最近几次的诊断数量
                     * @return Size 查询数量, 0:查询所有, 其他值:最近几次的诊断数量
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置查询数量, 0:查询所有, 其他值:最近几次的诊断数量
                     * @param _size 查询数量, 0:查询所有, 其他值:最近几次的诊断数量
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取小程序版本
                     * @return MiniAppVersion 小程序版本
                     * 
                     */
                    std::string GetMiniAppVersion() const;

                    /**
                     * 设置小程序版本
                     * @param _miniAppVersion 小程序版本
                     * 
                     */
                    void SetMiniAppVersion(const std::string& _miniAppVersion);

                    /**
                     * 判断参数 MiniAppVersion 是否已赋值
                     * @return MiniAppVersion 是否已赋值
                     * 
                     */
                    bool MiniAppVersionHasBeenSet() const;

                private:

                    /**
                     * 小程序AppID
                     */
                    std::string m_miniAppID;
                    bool m_miniAppIDHasBeenSet;

                    /**
                     * 诊断方式 1:基础诊断，2:深度诊断
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 诊断状态 -1:查询全部, 0:排队中, 1:成功, 2:失败, 3:进行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 查询数量, 0:查询所有, 其他值:最近几次的诊断数量
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 小程序版本
                     */
                    std::string m_miniAppVersion;
                    bool m_miniAppVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANREPORTLISTREQUEST_H_
