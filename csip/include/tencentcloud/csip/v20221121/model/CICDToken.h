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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CICDTOKEN_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CICDTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CI/CD接入Token
                */
                class CICDToken : public AbstractModel
                {
                public:
                    CICDToken();
                    ~CICDToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID</p>
                     * @return Id <p>ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>ID</p>
                     * @param _id <p>ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>CI/CD名称</p>
                     * @return Name <p>CI/CD名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>CI/CD名称</p>
                     * @param _name <p>CI/CD名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>用于接入的Token</p>
                     * @return Token <p>用于接入的Token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>用于接入的Token</p>
                     * @param _token <p>用于接入的Token</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>扫描结果存储时长</p>
                     * @return Period <p>扫描结果存储时长</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>扫描结果存储时长</p>
                     * @param _period <p>扫描结果存储时长</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>已扫描文件</p>
                     * @return FileCnt <p>已扫描文件</p>
                     * 
                     */
                    uint64_t GetFileCnt() const;

                    /**
                     * 设置<p>已扫描文件</p>
                     * @param _fileCnt <p>已扫描文件</p>
                     * 
                     */
                    void SetFileCnt(const uint64_t& _fileCnt);

                    /**
                     * 判断参数 FileCnt 是否已赋值
                     * @return FileCnt 是否已赋值
                     * 
                     */
                    bool FileCntHasBeenSet() const;

                    /**
                     * 获取<p>最近扫描状态</p>
                     * @return LastScanStatus <p>最近扫描状态</p>
                     * 
                     */
                    std::string GetLastScanStatus() const;

                    /**
                     * 设置<p>最近扫描状态</p>
                     * @param _lastScanStatus <p>最近扫描状态</p>
                     * 
                     */
                    void SetLastScanStatus(const std::string& _lastScanStatus);

                    /**
                     * 判断参数 LastScanStatus 是否已赋值
                     * @return LastScanStatus 是否已赋值
                     * 
                     */
                    bool LastScanStatusHasBeenSet() const;

                    /**
                     * 获取<p>最近扫描时间</p>
                     * @return LastScanTime <p>最近扫描时间</p>
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置<p>最近扫描时间</p>
                     * @param _lastScanTime <p>最近扫描时间</p>
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>CI/CD名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用于接入的Token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>扫描结果存储时长</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>已扫描文件</p>
                     */
                    uint64_t m_fileCnt;
                    bool m_fileCntHasBeenSet;

                    /**
                     * <p>最近扫描状态</p>
                     */
                    std::string m_lastScanStatus;
                    bool m_lastScanStatusHasBeenSet;

                    /**
                     * <p>最近扫描时间</p>
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CICDTOKEN_H_
