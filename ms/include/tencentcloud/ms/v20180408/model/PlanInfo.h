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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_PLANINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_PLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/SoInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 加固策略信息
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dex分离，0关闭，1开启
                     * @return SetFile Dex分离，0关闭，1开启
                     * 
                     */
                    std::string GetSetFile() const;

                    /**
                     * 设置Dex分离，0关闭，1开启
                     * @param _setFile Dex分离，0关闭，1开启
                     * 
                     */
                    void SetSetFile(const std::string& _setFile);

                    /**
                     * 判断参数 SetFile 是否已赋值
                     * @return SetFile 是否已赋值
                     * 
                     */
                    bool SetFileHasBeenSet() const;

                    /**
                     * 获取apk大小优化，0关闭，1开启
                     * @return ApkSizeOpt apk大小优化，0关闭，1开启
                     * 
                     */
                    uint64_t GetApkSizeOpt() const;

                    /**
                     * 设置apk大小优化，0关闭，1开启
                     * @param _apkSizeOpt apk大小优化，0关闭，1开启
                     * 
                     */
                    void SetApkSizeOpt(const uint64_t& _apkSizeOpt);

                    /**
                     * 判断参数 ApkSizeOpt 是否已赋值
                     * @return ApkSizeOpt 是否已赋值
                     * 
                     */
                    bool ApkSizeOptHasBeenSet() const;

                    /**
                     * 获取Dex加固，0关闭，1开启
                     * @return Dex Dex加固，0关闭，1开启
                     * 
                     */
                    uint64_t GetDex() const;

                    /**
                     * 设置Dex加固，0关闭，1开启
                     * @param _dex Dex加固，0关闭，1开启
                     * 
                     */
                    void SetDex(const uint64_t& _dex);

                    /**
                     * 判断参数 Dex 是否已赋值
                     * @return Dex 是否已赋值
                     * 
                     */
                    bool DexHasBeenSet() const;

                    /**
                     * 获取So加固，0关闭，1开启
                     * @return So So加固，0关闭，1开启
                     * 
                     */
                    uint64_t GetSo() const;

                    /**
                     * 设置So加固，0关闭，1开启
                     * @param _so So加固，0关闭，1开启
                     * 
                     */
                    void SetSo(const uint64_t& _so);

                    /**
                     * 判断参数 So 是否已赋值
                     * @return So 是否已赋值
                     * 
                     */
                    bool SoHasBeenSet() const;

                    /**
                     * 获取数据收集，0关闭，1开启
                     * @return Bugly 数据收集，0关闭，1开启
                     * 
                     */
                    uint64_t GetBugly() const;

                    /**
                     * 设置数据收集，0关闭，1开启
                     * @param _bugly 数据收集，0关闭，1开启
                     * 
                     */
                    void SetBugly(const uint64_t& _bugly);

                    /**
                     * 判断参数 Bugly 是否已赋值
                     * @return Bugly 是否已赋值
                     * 
                     */
                    bool BuglyHasBeenSet() const;

                    /**
                     * 获取防止重打包，0关闭，1开启
                     * @return AntiRepack 防止重打包，0关闭，1开启
                     * 
                     */
                    uint64_t GetAntiRepack() const;

                    /**
                     * 设置防止重打包，0关闭，1开启
                     * @param _antiRepack 防止重打包，0关闭，1开启
                     * 
                     */
                    void SetAntiRepack(const uint64_t& _antiRepack);

                    /**
                     * 判断参数 AntiRepack 是否已赋值
                     * @return AntiRepack 是否已赋值
                     * 
                     */
                    bool AntiRepackHasBeenSet() const;

                    /**
                     * 获取内存保护，0关闭，1开启
                     * @return Db 内存保护，0关闭，1开启
                     * 
                     */
                    uint64_t GetDb() const;

                    /**
                     * 设置内存保护，0关闭，1开启
                     * @param _db 内存保护，0关闭，1开启
                     * 
                     */
                    void SetDb(const uint64_t& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取So文件信息
                     * @return SoInfo So文件信息
                     * 
                     */
                    SoInfo GetSoInfo() const;

                    /**
                     * 设置So文件信息
                     * @param _soInfo So文件信息
                     * 
                     */
                    void SetSoInfo(const SoInfo& _soInfo);

                    /**
                     * 判断参数 SoInfo 是否已赋值
                     * @return SoInfo 是否已赋值
                     * 
                     */
                    bool SoInfoHasBeenSet() const;

                    /**
                     * 获取vmp，0关闭，1开启
                     * @return AntiVMP vmp，0关闭，1开启
                     * 
                     */
                    uint64_t GetAntiVMP() const;

                    /**
                     * 设置vmp，0关闭，1开启
                     * @param _antiVMP vmp，0关闭，1开启
                     * 
                     */
                    void SetAntiVMP(const uint64_t& _antiVMP);

                    /**
                     * 判断参数 AntiVMP 是否已赋值
                     * @return AntiVMP 是否已赋值
                     * 
                     */
                    bool AntiVMPHasBeenSet() const;

                    /**
                     * 获取保护so的强度，
                     * @return SoType 保护so的强度，
                     * 
                     */
                    std::vector<std::string> GetSoType() const;

                    /**
                     * 设置保护so的强度，
                     * @param _soType 保护so的强度，
                     * 
                     */
                    void SetSoType(const std::vector<std::string>& _soType);

                    /**
                     * 判断参数 SoType 是否已赋值
                     * @return SoType 是否已赋值
                     * 
                     */
                    bool SoTypeHasBeenSet() const;

                    /**
                     * 获取防日志泄漏，0关闭，1开启
                     * @return AntiLogLeak 防日志泄漏，0关闭，1开启
                     * 
                     */
                    uint64_t GetAntiLogLeak() const;

                    /**
                     * 设置防日志泄漏，0关闭，1开启
                     * @param _antiLogLeak 防日志泄漏，0关闭，1开启
                     * 
                     */
                    void SetAntiLogLeak(const uint64_t& _antiLogLeak);

                    /**
                     * 判断参数 AntiLogLeak 是否已赋值
                     * @return AntiLogLeak 是否已赋值
                     * 
                     */
                    bool AntiLogLeakHasBeenSet() const;

                    /**
                     * 获取资源防篡改，0关闭，1开启
                     * @return AntiAssets 资源防篡改，0关闭，1开启
                     * 
                     */
                    uint64_t GetAntiAssets() const;

                    /**
                     * 设置资源防篡改，0关闭，1开启
                     * @param _antiAssets 资源防篡改，0关闭，1开启
                     * 
                     */
                    void SetAntiAssets(const uint64_t& _antiAssets);

                    /**
                     * 判断参数 AntiAssets 是否已赋值
                     * @return AntiAssets 是否已赋值
                     * 
                     */
                    bool AntiAssetsHasBeenSet() const;

                    /**
                     * 获取防止截屏，0关闭，1开启
                     * @return AntiScreenshot 防止截屏，0关闭，1开启
                     * 
                     */
                    uint64_t GetAntiScreenshot() const;

                    /**
                     * 设置防止截屏，0关闭，1开启
                     * @param _antiScreenshot 防止截屏，0关闭，1开启
                     * 
                     */
                    void SetAntiScreenshot(const uint64_t& _antiScreenshot);

                    /**
                     * 判断参数 AntiScreenshot 是否已赋值
                     * @return AntiScreenshot 是否已赋值
                     * 
                     */
                    bool AntiScreenshotHasBeenSet() const;

                    /**
                     * 获取SSL证书防窃取，0关闭，1开启
                     * @return AntiSSL SSL证书防窃取，0关闭，1开启
                     * 
                     */
                    uint64_t GetAntiSSL() const;

                    /**
                     * 设置SSL证书防窃取，0关闭，1开启
                     * @param _antiSSL SSL证书防窃取，0关闭，1开启
                     * 
                     */
                    void SetAntiSSL(const uint64_t& _antiSSL);

                    /**
                     * 判断参数 AntiSSL 是否已赋值
                     * @return AntiSSL 是否已赋值
                     * 
                     */
                    bool AntiSSLHasBeenSet() const;

                    /**
                     * 获取Dex签名校验，0关闭，1开启
                     * @return FileSign Dex签名校验，0关闭，1开启
                     * 
                     */
                    std::string GetFileSign() const;

                    /**
                     * 设置Dex签名校验，0关闭，1开启
                     * @param _fileSign Dex签名校验，0关闭，1开启
                     * 
                     */
                    void SetFileSign(const std::string& _fileSign);

                    /**
                     * 判断参数 FileSign 是否已赋值
                     * @return FileSign 是否已赋值
                     * 
                     */
                    bool FileSignHasBeenSet() const;

                    /**
                     * 获取root检测，0关闭，1开启
                     * @return AntiRoot root检测，0关闭，1开启
                     * 
                     */
                    std::string GetAntiRoot() const;

                    /**
                     * 设置root检测，0关闭，1开启
                     * @param _antiRoot root检测，0关闭，1开启
                     * 
                     */
                    void SetAntiRoot(const std::string& _antiRoot);

                    /**
                     * 判断参数 AntiRoot 是否已赋值
                     * @return AntiRoot 是否已赋值
                     * 
                     */
                    bool AntiRootHasBeenSet() const;

                    /**
                     * 获取Dex分离，0关闭，1开启
                     * @return SeperateDex Dex分离，0关闭，1开启
                     * @deprecated
                     */
                    uint64_t GetSeperateDex() const;

                    /**
                     * 设置Dex分离，0关闭，1开启
                     * @param _seperateDex Dex分离，0关闭，1开启
                     * @deprecated
                     */
                    void SetSeperateDex(const uint64_t& _seperateDex);

                    /**
                     * 判断参数 SeperateDex 是否已赋值
                     * @return SeperateDex 是否已赋值
                     * @deprecated
                     */
                    bool SeperateDexHasBeenSet() const;

                    /**
                     * 获取Dex签名校验，0关闭，1开启
                     * @return DexSig Dex签名校验，0关闭，1开启
                     * @deprecated
                     */
                    uint64_t GetDexSig() const;

                    /**
                     * 设置Dex签名校验，0关闭，1开启
                     * @param _dexSig Dex签名校验，0关闭，1开启
                     * @deprecated
                     */
                    void SetDexSig(const uint64_t& _dexSig);

                    /**
                     * 判断参数 DexSig 是否已赋值
                     * @return DexSig 是否已赋值
                     * @deprecated
                     */
                    bool DexSigHasBeenSet() const;

                    /**
                     * 获取root检测，0关闭，1开启
                     * @return AntiQemuRoot root检测，0关闭，1开启
                     * @deprecated
                     */
                    uint64_t GetAntiQemuRoot() const;

                    /**
                     * 设置root检测，0关闭，1开启
                     * @param _antiQemuRoot root检测，0关闭，1开启
                     * @deprecated
                     */
                    void SetAntiQemuRoot(const uint64_t& _antiQemuRoot);

                    /**
                     * 判断参数 AntiQemuRoot 是否已赋值
                     * @return AntiQemuRoot 是否已赋值
                     * @deprecated
                     */
                    bool AntiQemuRootHasBeenSet() const;

                private:

                    /**
                     * Dex分离，0关闭，1开启
                     */
                    std::string m_setFile;
                    bool m_setFileHasBeenSet;

                    /**
                     * apk大小优化，0关闭，1开启
                     */
                    uint64_t m_apkSizeOpt;
                    bool m_apkSizeOptHasBeenSet;

                    /**
                     * Dex加固，0关闭，1开启
                     */
                    uint64_t m_dex;
                    bool m_dexHasBeenSet;

                    /**
                     * So加固，0关闭，1开启
                     */
                    uint64_t m_so;
                    bool m_soHasBeenSet;

                    /**
                     * 数据收集，0关闭，1开启
                     */
                    uint64_t m_bugly;
                    bool m_buglyHasBeenSet;

                    /**
                     * 防止重打包，0关闭，1开启
                     */
                    uint64_t m_antiRepack;
                    bool m_antiRepackHasBeenSet;

                    /**
                     * 内存保护，0关闭，1开启
                     */
                    uint64_t m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * So文件信息
                     */
                    SoInfo m_soInfo;
                    bool m_soInfoHasBeenSet;

                    /**
                     * vmp，0关闭，1开启
                     */
                    uint64_t m_antiVMP;
                    bool m_antiVMPHasBeenSet;

                    /**
                     * 保护so的强度，
                     */
                    std::vector<std::string> m_soType;
                    bool m_soTypeHasBeenSet;

                    /**
                     * 防日志泄漏，0关闭，1开启
                     */
                    uint64_t m_antiLogLeak;
                    bool m_antiLogLeakHasBeenSet;

                    /**
                     * 资源防篡改，0关闭，1开启
                     */
                    uint64_t m_antiAssets;
                    bool m_antiAssetsHasBeenSet;

                    /**
                     * 防止截屏，0关闭，1开启
                     */
                    uint64_t m_antiScreenshot;
                    bool m_antiScreenshotHasBeenSet;

                    /**
                     * SSL证书防窃取，0关闭，1开启
                     */
                    uint64_t m_antiSSL;
                    bool m_antiSSLHasBeenSet;

                    /**
                     * Dex签名校验，0关闭，1开启
                     */
                    std::string m_fileSign;
                    bool m_fileSignHasBeenSet;

                    /**
                     * root检测，0关闭，1开启
                     */
                    std::string m_antiRoot;
                    bool m_antiRootHasBeenSet;

                    /**
                     * Dex分离，0关闭，1开启
                     */
                    uint64_t m_seperateDex;
                    bool m_seperateDexHasBeenSet;

                    /**
                     * Dex签名校验，0关闭，1开启
                     */
                    uint64_t m_dexSig;
                    bool m_dexSigHasBeenSet;

                    /**
                     * root检测，0关闭，1开启
                     */
                    uint64_t m_antiQemuRoot;
                    bool m_antiQemuRootHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_PLANINFO_H_
